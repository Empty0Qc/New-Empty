//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int maxTurbulenceSize(vector<int>& A) {
//	int _max = 0, count1 = 1,count2 = 1;
//	for (size_t i = 0; i < A.size() - 1; ++i)
//	{
//		if (i % 2)
//		{
//			if (A[i] > A[i + 1])
//			{
//				++count1;
//				count2 = 1;
//			}	
//			else
//			{
//				count1 = 1;
//				++count2;
//			}
//		}
//		else
//		{
//			if (A[i] < A[i + 1])
//			{
//				++count1;
//				count2 = 1;
//			}
//			else
//			{
//				count1 = 1;
//				++count2;
//			}
//		}
//		int tmp = max(count1, count2);
//		_max = max(tmp, _max);
//	}
//	return _max;
//}
//int main()
//{
//	vector<int> v{ 9,4,2,10,7,8,8,1,9 };
//	cout << maxTurbulenceSize(v) << endl;
//	//return 0;
//}