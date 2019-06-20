//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double arr[] = {200, 300, 400, 600, 1000};
//	int len = (sizeof(arr) / sizeof(arr[0]));
//	double new_max = 1, new_min = 0,max = -9999,min = 9999,average = 0;
//	for (int i = 0; i < len; i++)
//	{
//		average += arr[i];
//		max = max > arr[i] ? max : arr[i];
//		min = min < arr[i] ? min : arr[i];
//	}
//	average /= len;
//	cout << "规范化:\n";
//	for (int i = 0; i < len; i++)
//	{
//		double t;
//		t = (arr[i] - min) / (max - min) * (new_max - new_min) + new_min;
//		cout << t << "   ";
//		if (i == len - 1)
//			cout << endl;
//	}
//	double s,t = 0;
//	for (int i = 0; i < len; i++)
//	{
//		t += pow((arr[i] - average), 2) / len;
//	}
//	s = sqrt(t);
//	t = 0;
//	cout << "Z规范化:\n";
//	for (int i = 0; i < len; i++)
//	{
//		cout << (arr[i] - average) / s << "   ";
//		if (i == len - 1)
//			cout << endl;
//	}
//	double absmax = 0;
//	for (int i = 0; i < len; i++)
//	{
//		absmax = absmax > abs(arr[i]) ? absmax : abs(arr[i]);
//	}
//	cout << "小数规范化:\n";
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i]/absmax << "   ";
//		if (i == len - 1)
//			cout << endl;
//	}
//	return 0;
//}