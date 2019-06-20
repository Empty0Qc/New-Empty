////https://www.luogu.org/problemnew/show/P1328
//#include <iostream>
//using namespace std;
//int a[512],ac;
//int b[512],bc;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		ac = bc = 0;
//		int as, bs;
//		cin >> as >> bs;
//		for (int i = 0; i < as; i++)
//			cin >> a[i];
//		for (int i = 0; i < bs; i++)
//			cin >> b[i];
//		for (int i = 0; i < n; i++)
//		{
//			int tmpa = i%as;
//			int tmpb = i%bs;
//			if (a[tmpa] != b[tmpb])
//			{
//				switch (a[tmpa])
//				{
//				case 0:
//					if (b[tmpb] == 1 || b[tmpb] == 4)
//						bc++;
//					else
//						ac++;
//					break;
//				case 1:
//					if (b[tmpb] == 2 || b[tmpb] == 4)
//						bc++;
//					else
//						ac++;
//					break;
//				case 2:
//					if (b[tmpb] == 0 || b[tmpb] == 3)
//						bc++;
//					else
//						ac++;
//					break;
//				case 3:
//					if (b[tmpb] == 0 || b[tmpb] == 1)
//						bc++;
//					else
//						ac++;
//					break;
//				case 4:
//					if (b[tmpb] == 2 || b[tmpb] == 3)
//						bc++;
//					else
//						ac++;
//					break;
//				}
//			}
//		}
//		cout << ac << " " << bc << endl;
//	}
//	return 0;
//}