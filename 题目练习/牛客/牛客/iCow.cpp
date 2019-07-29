//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Mp3{
//	int rating;
//	int idx;
//};
//
//bool Compare(const Mp3 &a, const Mp3 &b)
//{
//	if (a.rating == b.rating)
//		return a.idx < b.idx;
//	else
//		return a.rating > b.rating;
//}
//int main()
//{
//	int N, T;
//	while (cin >> N >> T)
//	{
//		vector<Mp3> v;
//		Mp3 mp3;
//		Mp3 front_mp3;
//		front_mp3.idx = 1;
//		cin >> front_mp3.rating;
//		for (int i = 2;i <= N;++i)
//		{
//			mp3.idx = i;
//			cin >> mp3.rating;
//			v.push_back(mp3);
//		}
//		sort(v.begin(), v.end(), Compare);
//		for (int i = 0;i < T;++i)
//		{
//			if (v[0].rating > front_mp3.rating)
//			{
//				cout << v[0].idx << endl;
//				int tmp = v[0].rating;
//				v[0].rating = 0;
//				int surplus = tmp % (N - 1);
//				int div = tmp / (N - 1);
//				front_mp3.rating += div + surplus;
//				for (int i = 1;i < N - 1; ++i)
//					v[i].rating += div;
//			}	
//			else
//			{
//				cout << front_mp3.idx << endl;
//				int tmp = front_mp3.rating;
//				front_mp3.rating = 0;
//				int surplus = tmp % (N - 1);
//				int div = tmp / (N - 1);
//				front_mp3.rating += surplus;
//				for (int i = 0;i < N - 1; ++i)
//					v[i].rating += div;
//			}
//			sort(v.begin(), v.end(), Compare);
//		}
//	}
//	return 0;
//}