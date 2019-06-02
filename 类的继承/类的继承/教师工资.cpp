//#include <iostream>
//#include <string>
//using namespace std;
//
//class Teacher{
//	string _name;
//	int _wages;
//	int _times;
//public:
//	Teacher(string name, int times)
//		:_name(name)
//		, _times(times)
//	{
//		this->Display();
//	}
//	void Display()
//	{
//		cout << "Name: " << _name << endl;
//		cout << "Times:" << _times << endl;
//	}
//	int gettimes()
//	{
//		return _times;
//	}
//};
//class Professor :public Teacher{
//	int _basewages = 6000;
//	int _extra = 30;
//public:
//	Professor(string name, int times)
//		:Teacher(name,times)
//	{
//		cout << "Wages: " << times * _extra + _basewages << endl;
//	}
//};
//
//class Lecturer :public Teacher{
//	int _basewages = 4000;
//	int _extra = 20;
//public:
//	Lecturer(string name, int times)
//		:Teacher(name, times)
//	{
//		cout << "Wages: " << times * _extra + _basewages << endl;
//	}
//};
//int main()
//{
//	Professor("ChaoQiWen", 30);
//	Lecturer("ChaoWenQi", 60);
//	return 0;
//}