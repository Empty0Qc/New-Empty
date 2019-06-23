////https://www.nowcoder.com/questionTerminal/97b6a49a85944650b2e3d0660b91c324
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Stu{
//	bool operator<(const Stu& b)
//	{
//		if ((this->c + this->d) != (b.c + b.d))
//			return ((this->c + this->d) >(b.c + b.d));
//		else
//			return (this->d == b.d)? (this->id < b.id) : (this->d > b.d);
//	}
//	int id;
//	int d;
//	int c;
//};
//void print(const Stu& s)
//{
//	cout << s.id << " " << s.d << " " << s.c << " "<< endl;
//}
//
//int main()
//{
//	int N,L,H,cnt = 0;
//	cin >> N >> L >> H;
//	vector<Stu> v[4];
//	for (int i = 0; i < N; i++)
//	{
//		Stu Info;
//		cin >> Info.id >> Info.d >> Info.c;
//		if (Info.d >= L && Info.c >= L)
//		{
//			if (Info.d >= H && Info.c >= H)
//				v[0].push_back(Info);
//			else if (Info.d >= H && Info.c < H)
//				v[1].push_back(Info);
//			else if (Info.d < H && Info.c < H && Info.d >= Info.c)
//				v[2].push_back(Info);
//			else
//				v[3].push_back(Info);
//			cnt++;
//		}	
//	}
//	cout << cnt << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		sort(v[i].begin(), v[i].end());
//		for (auto e : v[i])print(e);
//	}
//	return 0;
//}