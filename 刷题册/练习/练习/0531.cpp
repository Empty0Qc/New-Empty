//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> multiply(const vector<int>& A) {
//
//	int n = A.size();
//	vector<int> b(n);
//	int ret = 1;
//	for (int i = 0; i < n; ret *= A[i++]){
//		b[i] = ret;
//	}
//	ret = 1;
//	for (int i = n - 1; i >= 0; ret *= A[i--]){
//		b[i] *= ret;
//	}
//	return b;
//}
//int main()
//{
//	vector<int> A;
//	vector<int> t;
//	A.push_back(5);
//	A.push_back(4);
//	A.push_back(3);
//	A.push_back(2);
//	A.push_back(1);
//	t = multiply(A);
//	for (const auto &e : t)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}