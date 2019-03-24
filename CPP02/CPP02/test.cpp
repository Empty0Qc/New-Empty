#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
#include<string>
using namespace std;

#if 0
class Date{
	/*friend ostream& operator<<(ostream& _cout, const Date& d);*/
public:
	Date(int year = 1900, int month = 1, int day = 1)
		:_year(year)
		, _month(month)
		, _day(day)
	{
		if (!(_year >  0  &&
			  _month > 0  && _month < 13 && 
			  _day   > 0  && _day   < GetDaysOfMonth(_year , _month)))
		{
			_year = 1900;
			_month = 1;
			_day = 1;
		}
	}
	//拷贝构造&赋值运算符重载(即使不写，编译器会(在编译器认为需要的时候)自动生成)
	Date(const Date &d)
		:_year(d._year)
		, _month(d._month)
		, _day(d._day)
	{}
	Date& operator=(const Date& d){
		if (this != &d){
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}

	Date operator+(int days){
		if (days < 0)
			return *this - (0 - days);
		Date temp(*this);
		temp._day += days;

		int daysOfMonth = 0;
		while (temp._day > (daysOfMonth = GetDaysOfMonth(temp._year, temp._month)))
		{
			temp._day -= daysOfMonth;
			temp._month += 1;
			if (temp._month > 12){
				temp._year += 1;
				temp._month = 1;
			}
		}
		return temp;
	}

	Date operator-(int days){
		if (days < 0)
			return *this + (0 - days);
		Date temp(*this);
		temp._day -= days;
		while (temp._day <= 0){
			temp._month -= 1;
			if (0 == temp._month){
				temp._year -= 1;
				temp._month = 12;
			}

			temp._day += GetDaysOfMonth(temp._year, temp._month);

		}
		return temp;
	}


	int operator-(const Date& d){
		Date minDate(*this);
		Date maxDate(d);
		if (minDate > maxDate)
			swap(minDate, maxDate);
		int count = 0;
		while (minDate != maxDate){
			count++;
			++minDate;
		}
		return count;
	}

	Date& operator++(){
		*this = *this + 1;
		return *this;
	}

	Date operator++(int){
		Date temp(*this);
		++temp;
		return temp;
	}

	Date& operator--(){
		*this = *this - 1;
		return *this;
	}

	Date operator--(int){
		Date temp(*this);
		--temp;
		return temp;
	}

	bool operator>(const Date&  d){
		return _year >  d._year ||
			   _year == d._year && _month >  d._month ||
			   _year == d._year && _month == d._month && _day > d._day;
	}

	bool operator<(const Date&  d){
		return _year < d._year ||
			_year == d._year && _month < d._month ||
			_year == d._year && _month == d._month && _day < d._day;
	}

	bool operator==(const Date& d){
		return !(*this > d || *this < d);
	}

	bool operator!=(const Date& d){
		return !(*this == d);
	}

	Date* operator& (){
		return this;
	}

	const Date* operator& () const
	{
		return this;
	}
	friend ostream& operator<<(ostream& _cout, const Date& d){
		cout << d._year << "-" << d._month << "-" << d._day << endl;
		return _cout;
	}
private:
	int GetDaysOfMonth(int year, int month)
	{
		int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (2 == month && IsLeapYear(year))
			days[month] += 1;

		return days[month];
	}
	bool IsLeapYear(int year){
		if (0 == year % 4 && 0 != year % 100 || 0 == year % 400)
			return true;
		return false;
	}
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2019, 3, 11);
	Date d4(2018, 3, 2);
	Date d2(1997, 5, 28);
	Date d3(1998, 2, 2);
	cout << d2 - d3 << endl;
	cout << d1 - d4 << endl;
	cout << d1 - d2 << endl;
	cout << d1++ << endl;
	return 0;
}
#endif
#if 0
class Student{
public:
	void SetStuInfo(char* name,char* gender,int age){
		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}
	void PrintStudent(){
		cout << _name << " " << _gender << " " << _age << endl;
	}

private:
	char _name[20];
	char _gender[3];
	int _age;

};

int main(){
	Student s1, s2, s3;
	s1.SetStuInfo("Wen97", "男", 20);
	s2.SetStuInfo("S686" , "男", 21);
	s3.SetStuInfo("S1987", "男", 20);
	s1.PrintStudent();
	s2.PrintStudent();
	s3.PrintStudent();
	vector<Student> s = { s1, s2, s3 };
	for (auto &e : s)
		e.PrintStudent();
	/*vector<int> s = {1,2,3,4,5,6,7,8,9,0};
	auto e = s;
	auto k = 3;
	auto kk = "s";
	auto kkk = 2.2;
	cout << k << kk << kkk << endl;*/



	return 0;
}

#endif

#if 0
class Time
{
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		:_hour(hour)
		, _minute(minute)
		, _second(second)
	{}
	/*Time(int hour = 0 , int minute = 0, int second = 0)
	{
		cout << "Time(int, int , int )" << endl;
		hour = _hour;
		min99ute = _minute;
		second = _second;
	}*/
private:
	int _hour;
	int _minute;
	int _second;
}; 
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	:_year(year)
	, _month(month)
	, _day(day)
	{}
//符号重载
	//1.返回值类型——支持连续赋值
	//2.参9数类型
	//3.是否检测自己给自己赋值
	//4.返回*this
	//5.如果用户没有定义，编译器会生成一个默认的赋值运算符重载，浅拷贝
	//6.哪些类的赋值运算符重载一定需要用户显式提供？ 只要类中涉及到资源的管理，用户必须显式提供
	Date &operator=(const Date &d)
	{
		if (this != &d){
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	void SetDate(int year, int month, int day){
		_year = year;
		_month = month;
		_day = day;

	}
	void PrintDate()
	{
		cout << _day << "--" << _month << "--" << _year << endl;
	}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
};
int main()
{
	Date d,d1;
	d.SetDate(2019, 2, 21);
	int a = 10, b = 20, c = 30;





	a = b = c;
	return 0;
}

#endif

#if 0
class CSum{
public:
	CSum()
	{
		_count++;
		_sum += _count;
	}
	static size_t GetSum(){
		return _sum;
	}
	static void ReSetSum()
	{
		_sum = 0;
		_count = 0;
	}
private:
	static size_t _sum;
	static size_t _count;
};

size_t CSum::_sum = 0;
size_t CSum::_count = 0;

size_t Sum(size_t N)
{
	CSum::ReSetSum();
	CSum s[100];
	return CSum::GetSum();
}
int main() 
{
	cout << Sum(100) << endl;
	return 0;
}
#endif
#include<crtdbg.h>
#if 0

void TestFun(){
	int *p1 = (int*)malloc(sizeof(int)); 
	int *p2 = (int*)malloc(sizeof(int));
	delete p1;
	delete[] p2;

	int *p3 = new int;
	int *p4 = new int;
	free(p3);
	delete[] p4;

	int* p5 = new int[10];
	int* p6 = new int[10];
	free(p5);
	delete[] p6;

	_CrtDumpMemoryLeaks();
}
int main(){
	TestFun();
	return 0;
}

#endif


#if 0

class Test
{
public:
	Test()
	{
		cout << "Test():" << this << endl;
		_t = 0;
		_ptr = (int*)malloc(sizeof(int));

	}
	~Test(){
		cout << "~Test():" << this << endl;
		if (nullptr != _ptr){
			free(_ptr);
			_ptr = nullptr;
		}
	}
private:
	int _t;
	int* _ptr;
};

int main(){
	Test* pt1 = (Test*)malloc(sizeof(Test));
	free(pt1);
	Test* pt2 = new Test;
	delete pt2;
	_CrtDumpMemoryLeaks();
	return 0;
}

#endif
