#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#if 0
#include <iostream>
using namespace std;

class Date{

public:
	//自定义默认构造函数
	Date(int year = 1900, int month = 1, int day = 1)
		:_year(year)
		, _month(month)
		, _day(day)
	{
		//如果日期不合法则自动赋默认值
		if (!(_year > 0 &&
			 _month > 0 && _month < 13 &&
			 _day   > 0 && _day   < GetDaysOfMonth(year, month)))
		{
			_year   = 1900;
			_month  = 1;
			_day    = 1;
		}
	}
	//拷贝构造函数
	Date(const Date& d)
		: _year(d._year)
		, _month(d._month)
		, _day(d._day){}	
	//赋值操作符函数
	Date& operator= (const Date& d){
		if (this != &d){
			_year  = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	Date operator+ (int days){
		if (days < 0)
			return *this - (0 - days);
		Date temp(*this);
		temp._day += days;

		int daysOfMonth = 0;
		while (temp._day >(daysOfMonth = GetDaysOfMonth(_year, _month)))
		{
			temp._day -= daysOfMonth;
			temp._month += 1;

			if (temp._month > 12){
				temp._year  += 1;
				temp._month = 1;
			}
		}
		return temp;
	}
	Date operator- (int days){
		if (days < 0)
			return *this + (0 - days);
		Date temp(*this);
		temp._day -= days;
		if (temp._day <= 0){
			temp._month -= 1;
			if (0 == temp._month){
				temp._year -= 1;
				temp._month = 12;
			}
			temp._day += GetDaysOfMonth(temp._year, temp._month);
		}
		return temp;
	}
	int operator- (const Date& d){
		Date minDate(*this);
		Date maxDate(d);
		if (minDate > maxDate){
			swap(minDate, maxDate);
		}
		int count = 0;
		while (minDate != maxDate){
			count++;
			++minDate;
		}
		return count;
	}
	bool operator==(const Date& d){
		return !(*this > d || *this < d);
	}
	bool operator!=(const Date& d){
		return !(*this == d);
		//如下方法可不依靠  operator== 
		//return (*this > d || *this < d);
	}
	Date& operator--(){
		*this = *this - 1;
		return *this;
	}
	Date& operator++(){
		*this = *this + 1;
		return *this;
	}
	Date operator--(int){
		Date temp(*this);
		--temp;
		return temp;
	}
	Date operator++(int){
		Date temp(*this);
		++temp;
		return temp;
	}
	Date& operator-=(int day){
		if (day < 0)
			return *this += -day;
		_day = _day - day;
		while (_day <= 0){
			_month--;		
			if (0 == _month){
				_year -= 1;
				_month = 12;
			}
			_day += GetDaysOfMonth(_year, _month);
		}
		return *this;
	}
	Date& operator+=(int day){
		if (day < 0)
			return *this -= -day;
		_day = _day + day;
		while (_day > GetDaysOfMonth(_year, _month)){
			_day -= GetDaysOfMonth(_year, _month);
			_month++;
			if (13 == _month){
				_year++;
				_month = 1;
			}
		}
		return *this;
	}
	bool operator<(const Date& d)const{
		return _year < d._year ||
			   _year == d._year && _month <  d._month ||
			   _year == d._year && _month == d._month && _day < d._day;
	}
	bool operator<=(const Date& d)const{
		return !(*this > d);
	}
	bool operator>=(const Date& d)const{
		return !(*this < d);
	}
	bool operator>(const Date& d)const{
		return _year > d._year ||
			   _year == d._year && _month >  d._month ||
			   _year == d._year && _month == d._month && _day > d._day;
	}
	//
	Date* operator&(){
		return this;
	}
	const Date* operator&() const{
		return this;
	}
	friend ostream& operator<<(ostream& _cout, const Date& d){
		cout << d._year << "-" << d._month << "-" << d._day << endl;
		return _cout;
	}
private:
	int GetDaysOfMonth(int year, int month){
		int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (2 == month && IsLeapyear(year))
			days[month] += 1;

		return days[month];
	}
	bool IsLeapyear(int year){
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			return true;
		return false;
	}
	int _year;
	int _month;
	int _day;
};

void* operator new(size_t size, char* fileName, char* funcName, int lineNo){
	cout << fileName << ":" << funcName << ":" << lineNo << ":" << size << endl;
	return malloc(size);
}
#ifdef _DEBUG
#define new new(__FILE__,__FUNCTION__,__LINE__)
#endif

//内存池内容调用
void* Allocate(size_t size){
	return malloc(size);
}
//内存池内容归还
void* DeAllocate(void* p){
	free(p);       //1:39:41
}
int main()
{
	Date d1(2019, 3, 13);
	Date d2(2016, 9, 1);
    //	cout << d2+1 << endl;
	//Date* ptr = new Date;
	//delete ptr;
	//ptr = (Date*)Allocate(sizeof(Date));
	//return 0;
}
#endif


#if 0
//内存池应用
#include<iostream>
using namespace std;
struct ListNode
{
	ListNode(int data = 0)
	:_data(data)
	, _next(nullptr)
	, _prev(nullptr){
		cout << "ListNode(int data = 0)" << endl;
	}
	void* operator new(size_t n){
		//cout << "void* operator new(size_t n)" << endl;
		void* p = allocator<ListNode>().allocate(1);
		cout << "mem pool allocate" << endl;
		return p;
	}
	void operator delete(void* p){
		allocator<ListNode>().deallocate((ListNode*)p, 1);
		cout << "mem pool deallocate" << endl;
	}
	ListNode* _next;
	ListNode* _prev;
	int _data;
};

class List
{
public:
	List()
	{
		_head = new ListNode;
		_head->_next = _head;
		_head->_prev = _head;
	}
	~List()
	{
		if (_head)
		{
			ListNode* cur = _head->_next;
			while (cur != _head){
				ListNode* next = cur->_next;
				delete cur;
				cur = next;
			}
			delete _head;
			_head = nullptr;
		}
	
	}
private:
	ListNode* _head;
};

int main()
{
	List l[20];
	return 0;
}
#endif

#if 0

#include<iostream>
using namespace std;
//饿汉:(不管用不用，都提前准备好)
//1.构造函数私有
//2.定义一个单例静态成员，静态成员在程序运行之前完成初始化
//3.提供一个静态方法获取单例静态成员
//4.防拷贝
class Singleton
{
public:
	//返回引用和指针，保证全局唯一
	static Singleton* getInstance(){
		return &_sin;
	}
private:
	Singleton(){}
	//两种方式都可以，1.声明成私有，可以不实现
	//				  2.声明成一个delete函数
	Singleton(const Singleton& s);
	void fun();
	static Singleton _sin;
};
Singleton Singleton::_sin;

int main(){
	Singleton* a1 = Singleton::getInstance();
	return 0;
}
#endif

#include <mutex>
#if 0
//懒汉
class Singleton{
	static Singleton* grtInstance()
	{
		//真正需要时，创建
		//提高调用接口的效率
		if (_sin == nullptr){
			_mtx.lock();//加锁，相当于关门 加锁是为了数据安全和防止内存泄漏(保证内存只创建一次)
			if (_sin == nullptr)
			{
				_sin = new Singleton;	
			}
			_mtx.unlock();
		}
		return _sin;
	}
private:
	Singleton(){
		for (int i = 0; i < 100000000; i++){
			int x = i;
		}
	}
	Singleton(const Singleton& s) = delete;

	static Singleton* _sin;
	static mutex _mtx;
}; 
mutex Singleton::_mtx;

Singleton* Singleton::_sin = nullptr;

void fun(){
	for (int i = 0; i < 10; i++){
		cout << i << endl;
	}
}
#include<thread>
int main()
{
	//int i = 0;
	//i++;
	thread t1(fun);
	thread t2(fun);
	thread t3(fun);
	thread t4(fun);

	t1.join();
	t2.join();
	t3.join();
	t4.join();

	return 0;
}
#endif

#if 0

//数字字符串变成整数
#include<vector>

class Solutetion{
public:
	int StrToInt(string str){
		int ret = 0;
		int flag = 1;
		string::iterator sit = str.begin();
		while ( sit != str.end() )
		{
			if (*sit == '-' || *sit == '+'){
				if (*sit == '-')
					flag = -1;
			}
			else if (*sit >= '0' && *sit <= '9'){
				ret *= 10;
				ret += *sit - '0';
			}
			else{
				return 0;
			}
			sit++;
		}
		return flag * ret;
	}
};

#endif


#if 0
//template<class T>
//void Swap(T& a,T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
template<class T1,class T2>
T1 Add(const T1& a, const T2& b)
{
	return a + b;
}
int Add(int a, int b)
{
	return a + b;
}
int main()
{
	int x = 1;
	int y = 5;
	double z = 1.3;
//	cout << x << " " << y << endl;
//	Swap(x, y);
	cout << x << " " << y << endl;
	cout << Add(x, z) << " " << Add(x,y) << endl;
	return 0;
}

#endif

#if 1 
template<class T>
class Vector
{
public:
	Vector(size_t capacity = 10)
		:_array(new T[capacity])
		, _size(0)
		, _capacity(capacity)
	{}
	void PushBack(const T& a)
	{
		if (_size == _capacity)
		{
			cout << "Full" << endl;
			return;
		}
		_array[_size] = a;
		++_size;
	}
	~Vector()
	{
		if (_array)
		{
			delete[] _array;
			_array = nullptr;
			_size = _capacity = 0;
		}
	}
	size_t Size()
	{
		return _size;
	}
	T& operator[](size_t index)
	{
		if (index < _size)
		return _array[index];
	}
private:
	T* _array;
	size_t _size;
	size_t _capacity;
};

int main()
{
	Vector<int> v1;
	Vector<char> v2;
	v1.PushBack(1);
	v1.PushBack(2);
	v1.PushBack(3);
	v1.PushBack(4);
	for (size_t i = 0; i < v1.Size(); ++i)
	{
		cout << v1[i] << endl;
		
	}
	for (size_t i = 0; i < v1.Size(); ++i)
	{
		if (v1[i] % 2 == 0)
		{
			v1[i] = v1[i] * 2;
		}
		cout << v1.operator[](i) << endl;
	}
	return 0;
}
#endif