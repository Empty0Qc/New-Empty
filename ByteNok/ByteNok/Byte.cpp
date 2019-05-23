#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <list>
#include <algorithm>
using namespace std;


#if 1



int main()
{
	int n, x, Max = -99999, tmp = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		tmp = max(tmp + x, x);
		Max = max(tmp, Max);
	}
	cout << Max;
	return 0;
}
#endif
#if 0

int main()
{
	string A,B;
	int count = 0;
	cin >> A >> B;
	for (int i = 0; i <= A.length();i++)
	{
		string a = A;
		a.insert(i, B);
		string b = a;
		reverse(a.begin(), a.end());
		a == b ? count++ : count;
	}
	cout << count;
	return 0;
}

#endif

#if 0

int main()
{
	int M,N;
	cin >> M >> N;
	int m = M,n = N,i = 0;
	char arr[16] = {'0','1','2','3','4','5','6','7',
		'8','9','A','B','C','D','E','F'};
	while((int)pow(n,i) < m) i++;
	while(i > 0)
	{
		int tmp = 0;
		while(pow(n,i - 1) <= m)
		{
			tmp++;
			m -= (int)pow(n,i - 1);
		}
		cout << arr[tmp];   
		i--;
	}
	return 0;
}

#endif
#if 0

int main()
{
	string s = "",s1;
	bool x = true;
	while (cin >> s1 || x)
	{
		s = s + s1;
		if (cin >> s)
		{
			x = true;
			s = s + s1;
		}
	}
	return 0;
}

#endif

#if 0

int main()
{
	string s;
	cin >> s;
	int len = s.size();
	int i = 0,j,count,max_count = 0;
	char arr[1024] = { 0 };
	char tmp[1024] = {0};
	while (len > i && s[i])
	{
		count = j = 0;
		while (len > i && s[i] <= '9' && s[i] >= '0')
		{
			count++;
			tmp[j++] = s[i];
			i++;
		}
		if (count > max_count)
		{
			memcpy(arr, tmp, count);
			max_count = count;
		}	
		i++;
	}
	cout << arr;
	return 0;
}
#endif
#if 0

#include <iostream>
using namespace std;

int main()
{
	int n, tmp, count = 0, prev = 0;
	bool x = true;
	cin >> n;
	while (n--)
	{
		cin >> tmp;
		if (x && tmp > prev)
		{
			x = false;
			count++;
		}
		else if (!x && tmp < prev)
		{
			x = true;
			count++;
		}
		prev = tmp;
	}
	cout << count;
	return 0;
}

#endif

//class A
//{
//public:
//	void fun()
//	{
//		cout << "func()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		A::fun();
//		cout << "func(int i)->" << i << endl;
//	}
//};
//void Test()
//{
//	B b;
//	b.fun(10);
//};
//
//int main()
//{
//	Test();
//	return 0;
//}
//

#if 0

int count(vector<int> &vvv,int x)
{

}
bool DoCheck(vector<int> &vv)
{
	if (vv.size() == 0)
		return true;
	int len = vv.size();
	int count0 = count(vv,vv.data);
	if (len % 3 != 0 && count0 >= 2)
	{

	}
	return false;
}

int main()
{
	vector<int> v;
	for (int i = 0; i < 13; i++)
	{
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	for (int i = 1; i < 10; i++)
	{
		if (DoCheck(v))
			cout << i;
	}
	return 0;
}

#endif
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char s[1024] = {0};
//	int i = 0;
//	gets(s);
//	cout << "Hello,World." << endl;
//	cout << s;
//	return 0;
//}
