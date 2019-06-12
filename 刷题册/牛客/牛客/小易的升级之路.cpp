////https://www.nowcoder.com/questionTerminal/fe6c73cb899c4fe1bdd773f8d3b42c3d
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, start, tmp;
//	while (cin >> n >> start)
//	{
//		while (n--)
//		{
//			cin >> tmp;
//			if (tmp <= start)
//				start += tmp;
//			else
//			{
//				int a = tmp, b = start;
//				while (a%b != 0)
//				{
//					int t = a % b;
//					a = b;
//					b = t;
//				}
//				start += b;
//			}
//		}
//		cout << start << endl;
//	}
//	return 0;
//}