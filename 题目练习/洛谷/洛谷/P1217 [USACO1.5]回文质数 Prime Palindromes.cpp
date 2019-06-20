////https://www.luogu.org/problemnew/show/P1217
//#include <iostream>
//#include <cstring>
//#include <math.h>
//using namespace std;
//bool book[10000001];
//
//void prime(int b)
//{
//	memset(book, true, sizeof(book));
//	book[1] = false;
//	int siz = (int)sqrt(b);
//	for (int i = 2; i <= siz; i++)
//	{
//		if (book[i])
//		{
//			for (int j = 2; j <= b / i; j++)
//				book[i * j] = false;
//		}
//	}
//}
//
//bool Palindromes(int n)
//{
//	int tmp = n,sum = 0;
//	while (tmp)
//	{
//		sum = tmp % 10 + sum * 10;
//		tmp /= 10;
//	}
//	return sum == n;
//}
//int main()
//{
//	int _min, _max;
//	while (cin >> _min >> _max)
//	{
//		_max = _max >= 10000000 ? 9999999:_max;
//		prime(_max);
//		if (0 == _min % 2)_min++;
//		if (_min > _max)return 0;
//		for (int i = _min; i <= _max; i+=2)
//		{
//			if (book[i] && Palindromes(i))
//				cout << i << endl;
//		}
//	}
//	return 0;
//}