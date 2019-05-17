#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

#if 0
template<class T>
bool IsEqual(T& a, T& b)
{
	return a == b;
}


template<>
bool IsEqual<char*>(char*& a,char*& b)
{
	if (!strcmp(a, b))
		return true;
	return false;
}

int main()
{
	int a = 10;
	int b = 9;
	cout << IsEqual(a, b) << endl;

	char* a1 = new char[6];
	char* b1 = new char[6];
	strcpy(a1,"hello");
	strcpy(b1,"hello");
	cout << IsEqual(a1, b1) << endl;
	return 0;
}

#endif


#if 0
//特化解决递归问题
template<size_t N>
class Sum
{
public:
	enum{Ret = N + Sum<N-1>::Ret};
};
template<>
class Sum<1>
{
public:
	enum{ Ret = 1};
};

int main()
{
	cout << Sum<5>::Ret << endl;
	return 0;
}

#endif

#if 1

// 代表内置类型
struct __true_type {};
// 代表自定义类型
struct __false_type {};
template <class type>
struct __type_traits
{
	typedef __false_type is_POD_type;
};

#endif