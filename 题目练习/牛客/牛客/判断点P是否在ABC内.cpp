//#include <iostream>
//#include <math.h>
//using namespace std;
//#define ABS_FLOAT 0.0001
//
//struct point_float
//{
//	float x;
//	float y;
//	point_float()
//	{}
//	point_float(float _x,float _y)
//	:x(_x)
//	,y(_y)
//	{}
//};
//
//
//float GetTriangleSquar(const point_float a, const point_float b, const point_float c)
//{
//	point_float AB, BC;
//	AB.x = b.x - a.x;
//	AB.y = b.y - a.y;
//	BC.x = c.x - b.x;
//	BC.y = c.y - b.y;
//	return fabs((AB.x * BC.y) - (AB.y * BC.x)) / 2.0f;
// }
//bool IsInTriangle(const point_float A, const point_float B, const point_float C, const point_float P)
//{
//	float SABC, SABP, SACP, SBCP;
//	SABC = GetTriangleSquar(A, B, C);
//	SABP = GetTriangleSquar(A, B, P);
//	SACP = GetTriangleSquar(A, C, P);
//	SBCP = GetTriangleSquar(B, C, P);
//	if (fabs(SABC - SABP - SACP - SBCP) < ABS_FLOAT)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	point_float a(0,0), b(0,5), c(5,0), d(6,6);
//	cout << IsInTriangle(a, b, c, d) << endl;
//	return 0;
//}