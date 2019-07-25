//#include<iostream>
//#include<string>
//#include<math.h>
//using namespace std;
//int main() {
//	string str1, str2;
//	int len1, len2;
//	while (cin >> str1 >> str2 >> len1 >> len2) {
//		int i, j, l1, l2, num = 0;
//		char bb = 96;
//		if (str1.length() < len2)
//			str1.append(len2 - str1.size(), bb);
//		if (str2.length() < len2)
//			str2.append(len2 - str2.size(), bb);
//		for (i = len1;i <= len2;i++)
//			for (j = 0;j < i;j++)
//				num = num + (str2[j] - str1[j])*pow(26, i - j - 1);
//		cout << num - 1 << endl;
//	}
//}