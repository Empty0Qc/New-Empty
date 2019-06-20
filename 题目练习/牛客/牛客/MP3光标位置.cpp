//https://www.nowcoder.com/search?query=mp3%E5%85%89%E6%A0%87%E4%BD%8D%E7%BD%AE&type=all

//#include <iostream>
//#include <string>
//using namespace std;
//
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		if (n <= 0)
//			return 0;
//		string t;
//		cin >> t;
//		int x = 1;
//		if (n <= 4)
//		{
//			for (auto e : t)
//			{
//				if (e == 'U')
//					x = x == 1 ? n : x - 1;
//				else
//					x = x == n ? 1 : x + 1;
//			}
//			for (int i = 1; i <= n; i++)
//				cout << i << " ";
//			cout << endl << x << endl;
//		}
//		else
//		{
//			int f = 0;
//			for (auto e : t)
//			{
//				if (e == 'U')
//				{
//					if (x == 1)
//						f = 3;
//					else if (f > 0)
//						f--;
//					x = x == 1 ? n : x - 1;
//				}		
//				else
//				{
//					if (x == n)
//						f = 0;
//					else if (f < 3)
//						f++;
//					x = x == n ? 1 : x + 1;
//				}	
//			}
//			for (int i = 0 - f; i < 4 - f; i++)
//				cout << x + i << " ";
//			cout << endl << x << endl;
//		}
//	}
//	return 0;
//}