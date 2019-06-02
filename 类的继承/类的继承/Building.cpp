//#include <iostream>
//using namespace std;
//
//class Building{
//
//	int _floor;
//	int _sumrooms;
//	int _houseArea;
//public:
//	Building(int floor,int sumrooms,int houseArea)
//		:_floor(floor)
//		, _sumrooms(sumrooms)
//		, _houseArea(houseArea)
//	{
//		cout << "Floor:" << _floor << endl;
//		cout << "Sumrooms:" << _sumrooms << endl;
//		cout << "HouseArea:" << _houseArea << endl;
//	}
//};
//class Home_Arch :public Building{
//	int _bedrooms;
//	int _livingrooms;
//	int _kitchen;
//	int _bathrooms;
//public:
//	Home_Arch(int floor, int sumrooms, int houseArea
//		, int bedrooms, int livingrooms, int kitchen,int bathrooms)
//		:Building(floor, sumrooms, houseArea)
//		, _bedrooms(bedrooms)
//		, _livingrooms(livingrooms)
//		, _kitchen(kitchen)
//		,_bathrooms(bathrooms)
//	{
//		cout << "Bedrooms:" << _bedrooms << endl;
//		cout << "Livingrooms:" << _livingrooms << endl;
//		cout << "Kitchen:" << _kitchen << endl;
//		cout << "Bathrooms:" << _bathrooms << endl;
//	}
//};
//class Office_Building :public Building{
//	int _office;
//	int _conferenceroom;
//	
//public:
//	Office_Building(int floor, int sumrooms, int houseArea
//		, int office, int conferenceroom)
//		:Building(floor, sumrooms, houseArea)
//		, _office(office)
//		, _conferenceroom(conferenceroom)	
//	{
//		cout << "office:" << _office << endl;
//		cout << "conferenceroom:" << _conferenceroom << endl;	
//	}
//};
//class Hospital :public Building{
//	int _wards;
//	int _operatorrooms;
//
//public:
//	Hospital(int floor, int sumrooms, int houseArea
//		, int wards, int operatorrooms)
//		:Building(floor, sumrooms, houseArea)
//		, _wards(wards)
//		, _operatorrooms(operatorrooms)
//	{
//		cout << "Wards:" << _wards << endl;
//		cout << "Operatorrooms:" << _operatorrooms << endl;
//	}
//};
//
//int main()
//{
//	cout << "Home_Arch:" << endl;
//	Home_Arch *home = new Home_Arch(5, 8, 120, 3, 1, 2,2);
//	cout << "Office_Building:" << endl;
//	Office_Building *office = new Office_Building(20, 30, 800, 15, 15);
//	cout << "Hospital:" << endl;
//	Hospital *hos = new Hospital(20, 80, 9000, 40, 40);
//	return 0;
//}