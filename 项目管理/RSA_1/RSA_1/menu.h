//#include "RSA.h"
//
//
//RSA rsa;
//Key key = rsa.getKey();
//int GG = 1;
//void menu(int GG);
//void ProgramInit();
//void StringEncrypt();
//void FileEncrypt();
//void Sys_enum()
//{
//	system("title RSA Encrypt Tool");
//	system("mode con cols=40 lines=25");
//	system("color f1");
//	system("       date /T");
//	system("       TIME /T");
//}
//void menu1()
//{
//	Sys_enum();
//	printf("******************************\n");
//	printf("****** RSA Encrypt Tool ******\n");
//	printf("******************************\n");
//	printf("********   1.start    ********\n");
//	printf("********   0.exit     ********\n");
//	printf("******************************\n");
//
//}
//void menu2()
//{
//	Sys_enum();
//	printf("************************************\n");
//	printf("****** RSA Encrypt Tool    *********\n");
//	printf("************************************\n");
//	printf("****** 1.String Encryption *********\n");
//	printf("****** 2.String Dncryption *********\n");
//	printf("****** 3.File Encryption   *********\n");
//	printf("****** 4.File Encryption   *********\n");
//	printf("****** 5.Show Secret key   *********\n");
//	printf("****** 0.Return            *********\n");
//	printf("************************************\n");
//
//}
//
//void StringEncrypt()
//{
//	std::string strin, tmp;
//	std::cout << "请输入加密信息:\n";
//	while (strin.size() == 0 && getline(cin, tmp))
//	{
//		if (tmp != "")
//			strin = tmp;
//	}
//	std::vector<type_var> strecrept = rsa.ecrept(strin, key.ekey, key.pkey);
//	std::cout << "加密后的密文\n";
//	rsa.printInfo(strecrept);
//	
//	system("pause");
//}
//void StringDncrypt()
//{
//	type_var tmp;
//	std::cout << "请输入解密信息长度:\n";
//	std::cin >> tmp;
//	std::vector<type_var> vecout;
//	for (type_var i = 0; i < tmp; i++)
//	{
//		type_var t; std::cin >> t;
//		vecout.push_back(t);
//	} 
//	std::string strout = rsa.decrept(vecout, key.dkey, key.pkey);
//	std::cout << "解密后的密文\n";
//	std::cout << strout << std::endl;
//}
//void FileEncrypt()
//{
//	std::string tmp,tmp1;
//	cout << "Please enter the ecryption file name: \n";
//	cin >> tmp;
//	const char *file_name;
//	file_name = tmp.c_str();
//	cout << "Please enter the file name you want to save: \n";
//	cin >> tmp1;
//	const char *save_name;
//	save_name = tmp1.c_str();
//	rsa.ecrept(file_name, save_name, key.ekey, key.pkey);
//	std::cout << "Ecrypty Ok!!\n";	
//	system("pause");
//}
//void FileDncrypt()
//{
//	std::string tmp,tmp1;
//	cout << "Please enter the decryption file name: \n";
//	cin >> tmp;
//	const char *file_name;
//	file_name = tmp.c_str();
//	cout << "Please enter the file name you want to save: \n";
//	cin >> tmp1;
//	const char *save_name;
//	save_name = tmp1.c_str();
//	rsa.decrept(file_name, save_name, key.dkey, key.pkey);
//	std::cout << "Decrypt the complete!\n";
//	system("pause");
//}
//void game()
//{
//	int n, error_count = 0, i = 1;
//	do
//	{
//		std::string t_mp;
//		system("CLS");
//		menu(GG);
//		if (i > 1)
//			std::cout << "Please Enter Again!\n";
//		std::cin >> n;
//		switch (n)
//		{
//		case 1:
//			error_count = 0;
//			StringEncrypt();
//			break;
//		case 2:
//			error_count = 0;
//			StringDncrypt();
//			break;
//		case 3:
//			error_count = 0;
//			FileEncrypt();
//			break;
//		case 4:
//			FileDncrypt();
//			break;
//		case 5:
//			rsa.display();
//			break;
//		case 0:
//			GG = 1;
//			ProgramInit();
//			exit(0);
//		default:
//			error_count++;
//			std::cout << "error input!\n";
//		}
//		if (error_count > 3)
//		{
//			std::cout << "Three typos,the system is about to shut down.\n" << endl;
//			for (int i = 0; i <= 18; i++)
//			{
//				std::cout << "[]";
//				Sleep(50);
//			}
//		}
//	} while (i++);
//}
//void menu(int GG)
//{
//flag:
//	switch (GG)
//	{
//	case 1:
//		system("CLS");
//		menu1();
//		break;
//	case 2:
//		system("CLS");
//		menu2();
//		break;
//	default:
//		int count = 0;
//		while (1)
//		{
//			count++;
//			std::cout << "Mistake choose ! Please Try Again!!!\n";
//			std::cin >> GG;
//			if (GG == 1 || GG == 2)
//				goto flag;
//			if (count >= 10)
//				exit(0);
//		}
//	}
//}
//
////初始化页面
//void ProgramInit()
//{
//	int n, error_count = 0, i = 1;
//	system("title RSA Encrypt Tool");
//	system("mode con cols=40 lines=25");
//	system("color f1");
//	system("       date /T");
//	system("       TIME /T");
//	do
//	{
//		system("CLS");
//		menu(GG);
//		if (i > 1)
//			std::cout << "Please Enter Again!\n";
//		std::cin >> n;
//		switch (n)
//		{
//		case 1:
//			error_count = 0;
//			GG = 2;
//			game();
//			break;
//		case 0:
//			cout << "\nBye Bye!\n";
//			Sleep(500);
//			exit(0);
//		default:
//			error_count++;
//			std::cout << "error input!\n";
//		}
//		if (error_count > 3)
//		{
//			std::cout << "Three typos,the system is about to shut down.\n" << endl;
//			for (int j = 0; j <= 18; j++)
//			{
//				std::cout << "[]";
//				Sleep(50);
//			}
//			cout << "\nBye Bye!\n";
//			n = 0;
//		}
//	} while (i++);
//
//}