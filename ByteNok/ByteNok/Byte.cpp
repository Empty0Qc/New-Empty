#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <list>
#include <algorithm>
using namespace std;



#if 0

int main()
{
	int x,y;
	cin >> x >> y;
	x++;y++;
	int arr[100][100] = {0};
	arr[1][1] = 1;
	for(int i = 1;i <= x;i++)
	{
		for(int j = 1;j <= y;j++)
		{
			arr[i][j] = max(arr[i][j],arr[i-1][j]+arr[i][j-1]);
		}
	}
	cout << arr[x][y] << endl;
	return 0;
}

#endif
#if 0


int main(int argc, char const *argv[])
{
	int arr[] = {1,2,2,3,3,4,4,4,5},zhongshu[10] = {0},cishubiao[1024] = {0},num = 0,min = 0;
	//num : 众数的个数
	//min : 评判为众数的标准
	//cishubiao: 原始数组中每个元素出现的次数
	//zhongshu: 最终的众数集合
	int len = (sizeof(arr)/sizeof(arr[0]));
	for(int i =0;i < len;i++)
	{
		cishubiao[arr[i]]++;
	}
	for(int i =0;i < len;i++)
	{
		if (cishubiao[arr[i]] > min)
		{
			min = cishubiao[arr[i]];
			num = 0;
			zhongshu[num] = arr[i];
			num++;
		}
		else if (cishubiao[arr[i]] == min && arr[i] != arr[i - 1])
		{
			zhongshu[num] = arr[i];
			num++;
		}
	}
	return 0;
}


#endif
#if 0

int main()
{
	int mid, avg;
	int t = 0, tmp = 0, must[512] = {0}, sum = 0;
	int a[1024] = { 0 };
	int arr[] = { 13, 15, 16, 16, 19, 20, 20, 21, 22, 22, 25, 25, 25, 25,
				  30, 33, 33, 35, 35, 35, 35, 36, 40, 45, 46, 52, 70 };
	int siz = (sizeof(arr) / sizeof(arr[0]));
	if (siz % 2 == 0)
		mid = (arr[siz / 2] + arr[siz / 2 - 1]) / 2;
	else
		mid = arr[siz / 2];
	for (int i = 0; i < siz; i++)
	{
		//sum += arr[i];
		a[arr[i]]++;
	}
	avg = sum / siz;
	for (int i = 0; i < siz; i++)
	{
		if (a[arr[i]] > tmp)
		{
			tmp = a[arr[i]];
			must[t] = arr[i];
		}
	}
	t++;
	for (int i = 0; i < siz; i++)
	{
		if (a[arr[i]] == tmp && arr[i] != must[t - 1])
			must[t++] = arr[i];
	}
	cout << "要计算的数组为: \n";
	for (int i = 0; i < siz; i++)
		cout << arr[i] << " ";
	cout << "\n";
	cout << "该组数据的平均数为: " << avg << endl;
	cout << "该组数据的中位数为: " << mid << endl;
	cout << "该组数据的众数为:   " ;
	for (int i = 0; i < t; i++){ cout << must[i] << " "; }
	cout << "\n";
	cout << "该组数据的中列数为: " << (arr[siz - 1] + arr[0])/2 << endl;
	cout << "该组数据的第一个四分位数为: " << arr[siz/4] << endl;
	cout << "该组数据的第三个四分位数为: " << arr[3 * siz / 4] << endl;
	return 0;
}

#endif

#if 0


#define uul long long int

int cou = 0,su = 0;
uul f[30][30];
bool s[30][30];
const int fx[] = { 0, -2, -1, 1, 2, 2, 1, -1, -2 };
const int fy[] = { 0, 1 ,  2, 2, 1,-1,-2, -2, -1 };
int main()
{
	int dx,dy,hx,hy;
	cin >> dx >> dy >> hx >> hy;
	++dx; ++dy; ++hx; ++hy;
	f[1][1] = 1;
	for (int i = 0; i < 9; i++)
	{
		s[fx[i] + hx][fy[i] + hy] = 1;
	}
	for (int i = 1; i <= dx; i++)
	{
		for (int j = 1; j <= dy; j++)
		{
			if (s[i][j])continue;
			f[i][j] = max(f[i][j], f[i - 1][j] + f[i][j - 1]);
		}
	}
	cout << f[dx][dy];
	return 0;
}

#endif
#if 0

	int StrToInt(string str) {
		int tmp = 0,f = 1,len = str.length();
		for (int i = 0; i < len; i++)
		{
			if (str[i] < '0' || str[i] > '9')
			{
				
				if (str[i] == '-')
					f = -1;
				else (str[i] != '+')
					return 0;			
			}
			else
			{
				tmp = tmp * 10 + (str[i] - '0');
			}
		}
		return tmp * f;
	}


int main()
{
	string s;
	s = "-2135la15616";
	cout << StrToInt(s);
	return 0;
}

#endif

#if 0


#include <iostream>
using namespace std;

int main()
{
	int x,y,n;
	while(cin >> x >> y)
	{
		n = (x/4) * (y/4) * 8;
		n += (x/4)*(y%4)*2 + (x%4)*(y/4)*2;
		n += (x%4>1?2:x%4) * (y%4>1?2:y%4);
		n += (x%4 == y%4 && x%4 == 3)?1:0;
		cout << n << endl;
	}
	return 0;
}
#endif

#if 0


int main()
{
	string s,out = "";
	cin >> s;
	int len = s.size();
	int sum = 0,arr[1024];
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			arr[sum++] = s[i] - '0';
		}
		if (s[i] == '%' || s[i] == '#')
				s[i] = ' ';
	}
	return 0;
}

#endif

#if 0

int main()
{
	int n,Max = 0;
	cin >> n;
	int *arr = new int[n];
	for (int k = 0; k < n; k++)
	{
		cin >> arr[k];
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			Max = max(arr[j] + arr[i] - j + i,Max);
		}
	}
	cout << Max << endl;
	return 0;
}

#endif

#if 0



int main()
{
	int n, x, Max = -99999, tmp = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		tmp = max(tmp + x, x);
		Max = max(tmp, Max);
	}
	cout << Max;
	return 0;
}
#endif
#if 0

int main()
{
	string A,B;
	int count = 0;
	cin >> A >> B;
	for (int i = 0; i <= A.length();i++)
	{
		string a = A;
		a.insert(i, B);
		string b = a;
		reverse(a.begin(), a.end());
		a == b ? count++ : count;
	}
	cout << count;
	return 0;
}

#endif

#if 0

int main()
{
	int M,N;
	cin >> M >> N;
	int m = M,n = N,i = 0;
	char arr[16] = {'0','1','2','3','4','5','6','7',
		'8','9','A','B','C','D','E','F'};
	while((int)pow(n,i) < m) i++;
	while(i > 0)
	{
		int tmp = 0;
		while(pow(n,i - 1) <= m)
		{
			tmp++;
			m -= (int)pow(n,i - 1);
		}
		cout << arr[tmp];   
		i--;
	}
	return 0;
}

#endif
#if 0

int main()
{
	string s = "",s1;
	bool x = true;
	while (cin >> s1 || x)
	{
		s = s + s1;
		if (cin >> s)
		{
			x = true;
			s = s + s1;
		}
	}
	return 0;
}

#endif

#if 0

int main()
{
	string s;
	cin >> s;
	int len = s.size();
	int i = 0,j,count,max_count = 0;
	char arr[1024] = { 0 };
	char tmp[1024] = {0};
	while (len > i && s[i])
	{
		count = j = 0;
		while (len > i && s[i] <= '9' && s[i] >= '0')
		{
			count++;
			tmp[j++] = s[i];
			i++;
		}
		if (count > max_count)
		{
			memcpy(arr, tmp, count);
			max_count = count;
		}	
		i++;
	}
	cout << arr;
	return 0;
}
#endif
#if 0

#include <iostream>
using namespace std;

int main()
{
	int n, tmp, count = 0, prev = 0;
	bool x = true;
	cin >> n;
	while (n--)
	{
		cin >> tmp;
		if (x && tmp > prev)
		{
			x = false;
			count++;
		}
		else if (!x && tmp < prev)
		{
			x = true;
			count++;
		}
		prev = tmp;
	}
	cout << count;
	return 0;
}

#endif

//class A
//{
//public:
//	void fun()
//	{
//		cout << "func()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		A::fun();
//		cout << "func(int i)->" << i << endl;
//	}
//};
//void Test()
//{
//	B b;
//	b.fun(10);
//};
//
//int main()
//{
//	Test();
//	return 0;
//}
//

#if 0

int count(vector<int> &vvv,int x)
{

}
bool DoCheck(vector<int> &vv)
{
	if (vv.size() == 0)
		return true;
	int len = vv.size();
	int count0 = count(vv,vv.data);
	if (len % 3 != 0 && count0 >= 2)
	{

	}
	return false;
}

int main()
{
	vector<int> v;
	for (int i = 0; i < 13; i++)
	{
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	for (int i = 1; i < 10; i++)
	{
		if (DoCheck(v))
			cout << i;
	}
	return 0;
}

#endif
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char s[1024] = {0};
//	int i = 0;
//	gets(s);
//	cout << "Hello,World." << endl;
//	cout << s;
//	return 0;
//}
