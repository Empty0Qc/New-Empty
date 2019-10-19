//#include <iostream>
//using namespace std;
//#define ull unsigned long long 
//
//ull produce_dkey(ull ekey, ull orla)
//{
//	ull dkey = orla / ekey;
//	while (1)
//	{
//		if ((dkey * ekey) % orla == 1)
//			break;
//		++dkey;
//	}
//	return dkey;
//}
//ull get_m(ull c, ull d, ull orla)
//{
//	ull msg_des = 1;
//	ull x = c % orla;
//	ull y = d;
//	ull z = orla;
//	while (y)
//	{
//		if (y & 1)
//			msg_des = (msg_des * x) % z;
//		y >>= 1;
//		x = (x * x) % z;
//	}
//	return msg_des;
//}
//int main()
//{
//	ull e, c;
//	while (cin >> e >> c)
//	{
//		ull orla = (23333 - 1) * (10007 - 1);
//		ull n = 23333 * 10007;
//		ull d = produce_dkey(e, orla);
//		ull m = get_m(c,d, n);
//		//ull x = get_m(5, 13, 24);
//		cout << m << endl;
//	}
//	return 0;
//}


//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> res;
//		int t, tmp;
//		while (n--)
//		{
//			cin >> t;
//			vector<int> v(3, 0);
//			for (int i = 0; i < t; ++i)
//			{
//				cin >> tmp;
//				++v[tmp % 3];
//			}
//			int sum = 0;
//			sum = v[0];
//			sum += min(v[1], v[2]);
//			sum += (max(v[1], v[2]) - min(v[1], v[2])) / 3;
//			res.push_back(sum);
//		}
//		for (auto e : res)
//			cout << e << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//using namespace std;
//#define ll long long
//
//int binary_search(vector<ll>& v, ll src, bool& find)
//{
//	int left = 0;
//	int right = v.size() - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (v[mid] < src)
//		{
//			left = mid + 1;
//		}
//		else if (v[mid] > src)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			find = true;
//			return mid;
//		}
//	}
//
//	find = false;
//
//	if (left < v.size() && v[left] < src)
//	{
//		return left;
//	}
//	return left - 1;
//}
//
//int main()
//{
//	ll n, tmp;
//	while (cin >> n)
//	{
//		vector<ll> v;
//		while (n--)
//		{
//			int np;
//			cin >> np;
//			v.resize(np);
//			for (int i = 0; i < np; i++)
//			{
//				cin >> tmp;
//				int j;
//				for (j = i; j > 0 && tmp < v[j - 1]; j--)
//				{
//					v[j] = v[j - 1];
//				}
//				v[j] = tmp;
//			}
//
//			cin >> np;
//			ll start, end;
//			while (np--)
//			{
//				bool find1, find2;
//				cin >> start >> end;
//				int a = binary_search(v, end, find2);
//				int b = binary_search(v, start, find1);
//				int c = find1 || find2;
//				cout << a - b + c << endl;
//			}
//		}
//	}
//	
//	return 0;
//}

//
//#include <iostream>
//#include <vector>
//#include <cctype>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//void inputnum(long long& num)
//{
//	char ch = 0;
//	num = 0;
//	ch = getchar();
//	while (ch <= ' ')
//	{
//		ch = getchar();
//	}
//
//	while (isdigit(ch))
//	{
//		num = num * 10 + ch - '0';
//		ch = getchar();
//	}
//}
//
//void putnum(long long num)
//{
//	if (num)
//	{
//		putnum(num / 10);
//		putchar(num % 10 + '0');
//	}
//}
//
//int binary_search(vector<long long>& v, long long src, bool& find)
//{
//	int left = 0;
//	int right = v.size() - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (v[mid] < src)
//		{
//			left = mid + 1;
//		}
//		else if (v[mid] > src)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			find = true;
//			return mid;
//		}
//	}
//
//	find = false;
//
//	if (left < v.size() && v[left] < src)
//	{
//		return left;
//	}
//	return left - 1;
//}
//
//int main()
//{
//	vector<long long> data;
//	long long n = 0;
//	long long num, num2;
//	long long tmp;
//
//	inputnum(n);
//	while (n--)
//	{
//		inputnum(num);
//		data.resize(num);
//		/*for (int i = 0; i < num; i++)
//		{
//			inputnum(tmp);
//			int j;
//			for (j = i; j > 0 && tmp < data[j - 1]; j--)
//			{
//				data[j] = data[j - 1];
//			}
//			data[j] = tmp;
//		}*/
//		for (auto& e : data)
//			inputnum(e);
//		sort(data.begin(), data.end());
//		inputnum(num2);
//
//		for (int i = 0; i < num2; i++)
//		{
//			long long n1, n2;
//			bool find1, find2;
//
//			inputnum(n1);
//			inputnum(n2);
//
//			int a = binary_search(data, n1, find1);
//			int b = binary_search(data, n2, find2);
//			int c = b - a + (find1 || find2);
//			putnum(c);
//			if (!c)
//			{
//				putchar('0');
//			}
//			putchar('\n');
//		}
//	}
//
//	return 0;
//}
//


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//#define ll long long
//
//int binary_search(vector<ll>& v, ll src, bool& find)
//{
//	int left = 0;
//	int right = v.size() - 1;
//	int mid, pos;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		pos = v[mid];
//		if (pos == src)
//		{
//			find = true;
//			return mid;
//		}
//		else if (pos > src)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//
//	find = false;
//
//	if (left < v.size() && v[left] < src)
//	{
//		return left;
//	}
//	return left - 1;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(0);
//	int n;
//	while (cin >> n)
//	{
//		while (n--)
//		{
//			int np;
//			cin >> np;
//			vector<ll> v(np);
//			for (auto& e : v) cin >> e;
//			sort(v.begin(), v.end());
//			cin >> np;
//			ll start, end;
//			while (np--)
//			{
//				bool find1, find2;
//				cin >> start >> end;
//				ll a = binary_search(v, end, find2);
//				ll b = binary_search(v, start, find1);
//				ll c = find1 || find2;
//				cout << a - b + c << '\n';
//			}
//		}
//	}
//	return 0;
//}

//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n,m,tmp,pos;
//	while (cin >> n >> m)
//	{
//		pos = 0;
//		if (m > n)
//		{
//			cout << pos << endl;
//			continue;
//		}
//		vector<int> v(m);
//		for (auto& e : v) cin >> e;
//		make_heap(v.begin(), v.end(), [](const int a, const int b) { return a > b; });
//		queue<int> q;
//		for (int i = 0; i < n - m; ++i)
//		{
//			cin >> tmp;
//			q.push(tmp);
//		}
//		pos = v[0];
//		while (!q.empty())
//		{
//			tmp = v[0];
//			for (auto& e : v)
//				e -= tmp;
//			while(!q.empty() && !v[0])
//			{
//				pop_heap(v.begin(), v.end(), [](const int a, const int b) { return a > b; });
//				v.pop_back();
//				v.push_back(q.front());
//				q.pop();
//				push_heap(v.begin(), v.end(), [](const int a, const int b) { return a > b; });
//			}
//			pos += v[0];
//		}
//		cout << pos + 1 << endl;
//	}
//	return 0;
//}


//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int x, y,pos;
//		vector<int> res;
//		while (n--)
//		{
//			int a,b,ttx = 1,_max = -1;
//			cin >> x >> y;
//			pos = x * y / 100;
//			pos += !!(x * y % 100);
//			vector<int> v(x);
//			for (auto& e : v) cin >> e;
//			vector<int> book(x, 0);
//			vector<vector<int>> vb(x);
//			for (auto& e : vb)
//			{
//				cin >> a;
//				vector<int> tmp(a);
//				for (auto& p : tmp)
//					cin >> p;
//				e = tmp;
//			}
//			queue<int> q;
//			bool flag = true;
//			book[0] = 1;
//			q.push(1);
//			while (!q.empty() && flag)
//			{
//				int tx = q.front();
//				q.pop();
//				for (auto e : vb[tx - 1])
//				{
//					if (!book[e - 1])
//					{
//						++ttx;
//						book[e - 1] = 1;
//						q.push(e);
//						_max = max(_max, v[e - 1]);
//						if (ttx >= pos)
//							flag = false;
//					}
//				}
//			}
//			if (ttx >= pos)
//			{
//				res.push_back(_max + 1);
//			}
//			else
//			{
//				res.push_back(-1);
//			}
//		}
//		for (auto e : res)
//			cout << e << endl;
//	}
//	return 0;
//}
