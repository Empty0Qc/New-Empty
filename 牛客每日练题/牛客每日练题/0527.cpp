//#include <iostream>
//#include <string>
//using namespace std;
//
//
//#if 1
//int addAB(int a, int b)
//{
//	if (b == 0) return a;//没有进位时，完成运算，a为最终和。  
//	int sum, carry;
//	sum = a ^ b;//没有进位的加法运算  
//	carry = (a & b) << 1;//进位，左移运算。  
//	return addAB(sum, carry);//递归，相加。  
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << addAB(a, b) << endl;
//	return 0;
//}
//
//
//#endif
//
//
//#if 0
//int main()
//{
//	int x, y, n;
//	while (cin >> x >> y)
//	{
//		n = (x / 4) * (y / 4) * 8;
//
//		n += (x / 4)*(y % 4) * 2 + (x % 4)*(y / 4) * 2;
//
//		n += (x % 4>1 ? 2 : x % 4) * (y % 4>1 ? 2 : y % 4);
//		n += (x % 4 == y % 4 && x % 4 == 3) ? 1 : 0;
//
//		cout << n << endl;
//	}
//	return 0;
//}
//
//#endif
////
////int main()
////{
////	int prev = 0, n;
////	char a = '0';
////	bool x = true, y = true;
////	cin >> n;
////	while (n--)
////	{
////		string s;
////		cin >> s;
////		if (x)
////		{
////			if ((int)s.size() >= prev)
////				prev = s.size();
////			else
////				x = false;
////		}
////		if (y)
////		{
////			if (s[0] - a >= 0)
////				a = s[0];
////			else
////				y = false;
////		}
////	}
////	if (x && y)
////		cout << "both\n";
////	else if (x)
////		cout << "lengths\n";
////	else if (y)
////		cout << "lexicographically\n";
////	else
////		cout << "none\n";
////	return 0;
////}
//
//
////两种排序方法
////#include <iostream>
////#include <string>
////using namespace std;
////
////int main()
////{
////	string str1, str2;
////	int n, i = 1;
////	bool x = true, y = true;
////	cin >> n;
////	cin >> str1;
////	int len[n];
////	len[0] = str1.size();
////	while (n-->0){
////		str2 = str1;
////		cin >> str1;
////		len[i] = str1.size();
////		if (str1<str2)
////			x = 0;
////		if (len[i - 1]>len[i])
////			y = 0;
////		i++;
////	}
////	if (x && y)
////		cout << "both\n";
////	else if (y)
////		cout << "lengths\n";
////	else if (x)
////		cout << "lexicographically\n";
////	else
////		cout << "none\n";
////	return 0;
////}
//
////求最小公倍数
////#include <iostream>
////using namespace std;
////
////int main()
////{
////	int a, b, min, max, r;
////	cin >> a >> b;
////	if (a < b)
////	{
////		min = a;
////		max = b;
////	}
////	else
////	{
////		min = b;
////		max = a;
////	}
////	while (max % min)
////	{
////		r = max % min;
////		max = min;
////		min = r;
////	}
////	cout << a * b / r << endl;
////	return 0;
////}