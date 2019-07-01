////https://www.nowcoder.com/questionTerminal/79db907555c24b15a9c73f7f7d0e2471
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int x;
//	while (cin >> x)
//	{
//		//0 b 1 c 2 j 甲乙赢得几次所用的b c j的次数
//		int a[3] = { 0 }, b[3] = { 0 };
//		int v[3] = { 0 };//甲胜平负次数
//		for (int i = 0; i < x; i++)
//		{
//			int f = 0;
//			char m, n;
//			cin >> m >> n;
//			m == n ? v[1]++ : ((m == 'C' && n == 'J') ||
//				(m == 'J' && n == 'B') ||
//				(m == 'B' && n == 'C')) ? (v[0]++, f = 1) : (v[2]++, f = 2);
//			if (f == 1)
//				switch (m)
//			{
//				case 'B':
//					a[0]++;
//					break;
//				case 'C':
//					a[1]++;
//					break;
//				case 'J':
//					a[2]++;
//					break;
//			}
//			else if (f == 2)
//				switch (n)
//			{
//				case 'B':
//					b[0]++;
//					break;
//				case 'C':
//					b[1]++;
//					break;
//				case 'J':
//					b[2]++;
//					break;
//			}
//			else
//				continue;
//		}
//		cout << v[0] << " " << v[1] << " " << v[2] << " " << endl;
//		cout << v[2] << " " << v[1] << " " << v[0] << " " << endl;
//		if (a[0] < a[1] || a[0] < a[2])
//		{
//			if (a[1] < a[0] || a[1] < a[2])
//			{
//				cout << 'J ';
//			}
//			else
//				cout << 'C' << " ";
//		}
//		else
//			cout << 'B' << " ";
//		if (b[0] < b[1] || b[0] < b[2])
//		{
//			if (b[1] < b[0] || b[1] < b[2])
//			{
//				cout << 'J';
//			}
//			else
//				cout << 'C';
//		}
//		else
//			cout << 'B';
//	}
//	return 0;
//}