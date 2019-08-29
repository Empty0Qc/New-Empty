//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	vector<int> a;
//	a.reserve(100);
//	a.resize(50);
//	cout << a.size() << "  " << a.capacity() << endl;
//	//50  100
//	a.resize(150);
//	cout << a.size() << "  " << a.capacity() << endl;
//	//150  200
//	a.reserve(50);
//	cout << a.size() << "  " << a.capacity() << endl;
//	//150  200
//	a.resize(50);
//	cout << a.size() << "  " << a.capacity() << endl;
//	//50  200    
//}
//#include <iostream>
//using namespace std;
//
//int LastRemaining_Solution(unsigned int n, unsigned int m)
//{
//
//	if (n <= 0 && m <= 0) return -1; //蛋疼的特殊条件
//	int t = 0;
//	for (int i = 2; i <= n; i++)
//		t = (t + m) % i;
//	return t;
//}
//
//int main()
//{
//	LastRemaining_Solution(5, 2);
//	return 0;
//}