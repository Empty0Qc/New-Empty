////https://www.hackerrank.com/challenges/30-2d-arrays/problem
//#include <iostream>
//#include <math.h>
//using namespace std;
//#define COL 6
//#define ROW 6
//
//
//int main()
//{
//	int arr[ROW][COL] = { 0 };
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	int Max = -99999;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			int tmp = 0;
//			tmp = arr[i + 1][j + 1];
//			tmp += (arr[i][j] + arr[i][j + 1] + arr[i][j + 2]);
//			tmp += (arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]);
//			Max = tmp > Max ? tmp : Max;
//		}
//	}
//	cout << Max << endl;
//
//	return 0;
//}
