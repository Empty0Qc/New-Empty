////https://www.nowcoder.com/questionTerminal/94a4d381a68b47b7a8bed86f2975db46
//#include<iostream>
//#include<vector>
//using namespace std;
////
////class Solution {
////public:
//	vector<int> multiply(const vector<int>& A) 
//	{
//		int n = A.size();
//		vector<int> b(n);
//		int ret = 1;
//		//计算下三角
//		for (int i = 0; i < n; ){
//			b[i] = ret;
//			ret *= A[i++];
//		}
//		//计算上三角
//		ret = 1;
//		for (int i = n - 1; i >= 0; ){
//			b[i] *= ret; 
//			ret *= A[i--];
//		}
//		return b;
//	}
//	int main()
//	{
//		vector<int> s;
//		for (int i = 1; i < 6;i++)
//			s.push_back(i);
//		s = multiply(s);
//		for (auto &e : s)
//			cout << e << endl;
//		return 0;
//	}
////};
//
