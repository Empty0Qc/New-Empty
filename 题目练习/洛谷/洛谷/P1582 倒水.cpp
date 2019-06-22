////https://www.luogu.org/problemnew/show/P1582
//#include <iostream>
//#include <stack>
//#include <math.h>
//#include <algorithm>
//using namespace std;
//#define ll long long
//int main()
//{
//	ll N, K;
//	while (cin >> N >> K)
//	{
//		stack<ll> s;
//		ll cnt = 0;
//		while (N)
//		{
//			ll i = 0;
//			for (; (ll)pow(2, i + 1) <= N; i++);
//			s.push((ll)pow(2, i));
//			N -= (ll)pow(2, i);
//		}
//		while ((ll)s.size() > K)
//		{
//			ll t1, t2;
//			t1 = s.top();
//			s.pop();
//			t2 = s.top();
//			s.pop();
//			cnt += t2 - t1;
//			s.push(t2 * 2);
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}