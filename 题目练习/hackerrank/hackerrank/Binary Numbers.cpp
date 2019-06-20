////https://www.hackerrank.com/challenges/30-binary-numbers/problem
//#include <bits/stdc++.h>
//#include <cmath>
//#include <iostream>
//using namespace std;
//
//
//
//int main()
//{
//	int n, arr[26] = { 0 }, j = 0, Max = 0;
//	cin >> n;
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	for (int i = 0; (n >> i) > 0 && i < 26; i++)
//	{
//		arr[i] = (n >> i) & 1;
//		j++;
//	}
//	int a = 0, b = 0;
//	while (a < j && b < j)
//	{
//		if (arr[a] == 1)
//		{
//			Max = max(1, Max);
//			b = a + 1;
//			while (arr[b])b++;
//			Max = max(Max, b - a);
//			a = b + 1;
//		}
//		else
//			a++;
//	}
//	cout << Max << endl;
//	return 0;
//}
