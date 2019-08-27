#include "RSA.h"

RSA::RSA()
{
	produce_keys();
}

void RSA::printInfo(std::vector<type_var>& ecrept_str)
{
	for (const auto& e : ecrept_str)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;
}
std::vector<type_var> RSA::ecrept(std::string& str_in, type_var ekey, type_var pkey)
{
	std::vector<type_var> vecout;
	for (const auto& e : str_in)
	{
		vecout.push_back(ecrept((type_var)e, ekey, pkey));
	}
	return vecout;
}
std::string RSA::decrept(std::vector<type_var>& ecrept_str, type_var dkey, type_var pkey)
{
	std::string strout;
	for (const auto& e : ecrept_str)
	{
		strout.push_back((char)ecrept(e, dkey, pkey));
	}
	return strout;
}
//模幂运算
type_var RSA::ecrept(type_var msg, type_var key, type_var pkey)
{
	type_var msg_des = 1;
	type_var a = msg;
	type_var b = key;
	type_var c = pkey;
	while (b)
	{
		if (b & 1)
			msg_des = (msg_des * a) % c;
		b >>= 1;
		a = (a * a) % c;
	}
	return msg_des;
}
void RSA::ecrept(const char* plain_file_in, const char* ecrept_file_out,
	type_var ekey, type_var pkey)
{
	std::ifstream fin(plain_file_in,std::ifstream::binary);
	std::ofstream fout(ecrept_file_out, std::ofstream::binary);
	if (!fin.is_open()){ std::cout << "open file failed!" << std::endl; return; }
	const int NUM = 256;
	char buffer[NUM];
	type_var buffer_out[NUM];
	int curNum;
	while (!fin.eof())
	{
		fin.read(buffer, NUM);
		//当前所读取的字节数
		curNum = (int)fin.gcount();
		for (int i = 0; i < curNum; ++i)
		{
			buffer_out[i] = ecrept((type_var)buffer[i], ekey, pkey);
		}
		fout.write((char*)buffer_out, curNum * sizeof(type_var));
	}
	fin.close();
	fout.close();
}
void RSA::decrept(const char* ecrept_file_out, const char* plain_file_in,
	type_var dkey, type_var pkey)
{
	std::ifstream fin(ecrept_file_out, std::ifstream::binary);
	std::ofstream fout(plain_file_in, std::ofstream::binary);
	if (!fin.is_open()){ std::cout << "open file failed!" << std::endl; return; }
	const int NUM = 256;
	type_var buffer[NUM];
	char buffer_out[NUM];
	int curNum;
	while (!fin.eof())
	{
		fin.read((char*)buffer, NUM * sizeof(type_var));
		//当前所读取的字节数
		curNum = (int)fin.gcount();
		curNum /= sizeof(type_var);
		for (int i = 0; i < curNum; ++i)
		{
			buffer_out[i] = (char)ecrept(buffer[i], dkey, pkey);
		}
		fout.write(buffer_out, curNum);
	}
	fin.close();
	fout.close();
}

//随机生成一个素数
type_var RSA::produce_prime()
{
	rd::mt19937 gen((const uint32_t)time(nullptr));
	rd::uniform_int_distribution<type_var> dist(2, type_var(1) << DIFF);
	type_var prime = 0;
	while (1)
	{
		prime = dist(gen);
		if (is_prime(prime))
			break;
	}
	return prime;
}
bool RSA::is_prime(type_var prime)
{
	rd::mt11213b gen((const uint32_t)time(nullptr));
	if (miller_rabin_test(prime, 25, gen))
	{
		if (miller_rabin_test((prime - 1) / 2, 25, gen))
		{
			return true;
		}
	}
	return false;

}

//bool RSA::is_prime(const type_var prime)
//{
//	if (prime < 2)return false;
//	for (type_var i = 2; i <= sqrt(prime); ++i)
//	{
//		if (prime % i == 0)
//			return false;
//	}
//	return true;
//}
void RSA::produce_keys()
{
	type_var prime1 = produce_prime();
	type_var prime2 = produce_prime();
	while (prime1 == prime2)
		prime2 = produce_prime();
	_key.pkey = produce_pkey(prime1, prime2);
	type_var orla = produce_orla(prime1, prime2);
	_key.ekey = produce_ekey(orla);
	_key.dkey = produce_dkey(_key.ekey, orla);
}
type_var RSA::produce_pkey(type_var prime1, type_var prime2)
{
	return prime1 * prime2;
}
type_var RSA::produce_orla(type_var prime1, type_var prime2)
{
	return (prime1 - 1) * (prime2 - 1);
}

// orla 范围 1 < e_key < orla 并且 e , orla 互质
type_var RSA::produce_ekey(type_var orla)
{
	type_var ekey;
	rd::mt11213b gen((const uint32_t)time(nullptr));
	rd::uniform_int_distribution<type_var> dist(2, type_var(1) << DIFF);
	while (1)
	{
		ekey = dist(gen) % orla;
		if (ekey > 1 && produce_gcd(ekey, orla) == 1)
			break;
	}
	return ekey;
}
type_var RSA::produce_gcd(type_var ekey, type_var orla)
{
	type_var residual;
	while (residual = ekey % orla)
	{
		//a = b
		ekey = orla;
		//b = a % b
		orla = residual;
	}
	return orla;
}
type_var RSA::produce_dkey(type_var ekey, type_var orla)
{
	/*type_var dkey = orla / ekey;
	while (1)
	{
	if ((dkey * ekey) % orla == 1)
		break;
	++dkey;
	}
	return dkey;*/
	type_var x, y;
	exgcd(ekey, orla, x, y);
	return (x % orla + orla) % orla;
}


//欧几里得扩展
type_var RSA::exgcd(type_var ekey, type_var orla, type_var &x, type_var &y)
{
	if (orla == 0)
	{
		x = 1;
		y = 0;
		return ekey;
	}
	type_var ret = exgcd(orla, ekey % orla, x, y);
	type_var x1 = x;
	type_var y1 = y;
	x = y1; y = x1 - (ekey / orla) * y1;
	return ret;
}
//获取秘钥，公钥
void RSA::display()
{
	std::string name, passwd;
	std::cout << "Please Enter administrator name: \n";
	std::cin >> name;
	if (name == "root")
	{
		std::cout << "Please Enter administrator passwd: \n";
		std::cin >> passwd;
		if (passwd == "root")
		{
			std::cout << "pKey: " << _key.pkey << std::endl;
			std::cout << "ekey: " << _key.ekey << std::endl;
			std::cout << "dkey: " << _key.dkey << std::endl;
			system("pause");
			return;
		}
	}
	else
	{
		std::cout << "Access Denied!\n";
		exit(0);
	}
}