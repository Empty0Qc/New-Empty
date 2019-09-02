//#include <iostream>
//using namespace std;
//#define ull unsigned long long 
//int fun(double a, double b, double n)
//{
//
//	if (fabs(n - 1) < 0.001)
//		return b;
//	return fun(b,a + b,n - 1);
//}
//
//int main()
//{
//	double i;
//	while(cin >> i)
//		cout << fun(1,1,i) << endl;
//	return 0;
//}


//将一段数组按指定格式进行分组
//#include <iostream> 
//#include <vector>
//using namespace std;
//
//void _move(vector<int>& v, bool (*fun)(int,vector<int>))
//{
//	if (v.size() == 0)
//		return;
//	int begin = 0;
//	int end = v.size() - 1;;
//	while (begin < end)
//	{
//		while (begin < end && !fun(begin,v))++begin;
//		while (begin < end && fun(end,v))--end;
//		if (begin < end)
//		{
//			int tmp = v[begin];
//			v[begin] = v[end];
//			v[end] = tmp;
//			++begin;
//			--end;
//		}
//	}
//}
//
//bool fun(int point,vector<int> v)
//{
//	return bool(point % 2);
//}
//
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; ++i)
//		v.push_back(i);
//	_move(v, fun);
//	for (auto e : v)
//		cout << e << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	unsigned short flag = 0x1234;
//	if (*(unsigned char*)&flag == 0x12)
//	/*short a = 1;
//	char* b = (char*)&a;
//	if(*b & 1)*/
//		cout << "System is little-endian" << endl;
//	else
//		cout << "System is big-endian" << endl;
//	return 0;
//}


//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream>
//#include <unordered_map>
//#include <algorithm>
//using namespace std;
//
//void _print(const vector<int>& v)
//{
//	if (v.size())
//	{
//		for (size_t i = 0; i < v.size(); ++i)
//		{
//			if (i == 0)
//			{
//				cout << "[" << v[i] << ", ";
//				continue;
//			}
//			if (i == v.size() - 1)
//			{
//				cout << v[i] << "]" << endl;
//				continue;
//			}
//			cout << v[i] << ", ";
//		}
//	}
//}
//
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		unordered_map<int, int> v1;
//		vector<int> v2;
//		vector<int> prev;
//		vector<int> sortv;
//		string s1 = s.substr(0, s.find('\\r') - 1);
//		string s2 = s.substr(s.find('\\r') + 1);
//		while (s2.find(',') != string::npos)
//		{
//			v2.push_back(stoi(s2.substr(0, s2.find(','))));
//			s2 = s2.substr(s2.find(',') + 1);
//		}
//		v2.push_back(stoi(s2));
//		s2.clear();
//		while (s1.find(',') != string::npos)
//		{
//			++v1[stoi(s1.substr(0, s1.find(',')))];
//			s1 = s1.substr(s1.find(',') + 1);
//		}
//		++v1[stoi(s1)];
//		s1.clear();
//		for (auto& e : v2)
//		{
//			while (v1[e] > 0)
//			{
//				prev.push_back(e);
//				--v1[e];
//			}
//		}
//		for (auto& e : v1)
//		{
//			while (e.second > 0)
//			{
//				sortv.push_back(e.first);
//				--e.second;
//			}
//		}
//		sort(sortv.begin(), sortv.end());
//		prev.insert(prev.end(), sortv.begin(), sortv.end());
//		_print(prev);
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual int fun(int a, int b)
//	{
//		cout << "A";
//		return a + b;
//	}
//};
//class C :virtual public A
//{
//public:
//	virtual int fun(int a, int b)
//	{
//		cout << "C";
//		return a + b;
//	}
//};
//class B :virtual public  A, virtual public C
//{
//public:
//	int fun1(int a, int b,char c)
//	{
//		cout << "B";
//		return a + b;
//	}
//
//};
//
//int main()
//{
//	C* p = new class C;
//	A* d = p;
//	cout << d->fun(1, 2);
//	return 0;
//}



