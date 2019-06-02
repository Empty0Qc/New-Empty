#include<iostream>
using namespace std;

class Square{
	int _length = 10;
public:
	Square(int length)
		:_length(length)
	{}
	virtual void Circumference()
	{
		cout << "Circumference:" << 4 * _length << endl;
	}
	int getl()
	{
		return _length;
	}

};
class Rectangle :public Square{
	int _width;
public:
	Rectangle(int length,int width)
		:Square(length)
		, _width(width)
	{}
	void Rec()
	{
		cout << "Rectangle:" << 2 * (_width + Square::getl()) << endl;
	}
};

int main(){
	Square *s = new Square(10);
	s->Circumference(); 
	Rectangle *s1 = new Rectangle(10,15);
	s1->Rec();
	return 0;
}