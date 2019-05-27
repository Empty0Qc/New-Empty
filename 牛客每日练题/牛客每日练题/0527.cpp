//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int prev = 0, n;
//	char a = '0';
//	bool x = true, y = true;
//	cin >> n;
//	while (n--)
//	{
//		string s;
//		cin >> s;
//		if (x)
//		{
//			if ((int)s.size() >= prev)
//				prev = s.size();
//			else
//				x = false;
//		}
//		if (y)
//		{
//			if (s[0] - a >= 0)
//				a = s[0];
//			else
//				y = false;
//		}
//	}
//	if (x && y)
//		cout << "both\n";
//	else if (x)
//		cout << "lengths\n";
//	else if (y)
//		cout << "lexicographically\n";
//	else
//		cout << "none\n";
//	return 0;
//}


//两种排序方法
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str1, str2;
//	int n, i = 1;
//	bool x = true, y = true;
//	cin >> n;
//	cin >> str1;
//	int len[n];
//	len[0] = str1.size();
//	while (n-->0){
//		str2 = str1;
//		cin >> str1;
//		len[i] = str1.size();
//		if (str1<str2)
//			x = 0;
//		if (len[i - 1]>len[i])
//			y = 0;
//		i++;
//	}
//	if (x && y)
//		cout << "both\n";
//	else if (y)
//		cout << "lengths\n";
//	else if (x)
//		cout << "lexicographically\n";
//	else
//		cout << "none\n";
//	return 0;
//}

//求最小公倍数
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, min, max, r;
//	cin >> a >> b;
//	if (a < b)
//	{
//		min = a;
//		max = b;
//	}
//	else
//	{
//		min = b;
//		max = a;
//	}
//	while (max % min)
//	{
//		r = max % min;
//		max = min;
//		min = r;
//	}
//	cout << a * b / r << endl;
//	return 0;
//}