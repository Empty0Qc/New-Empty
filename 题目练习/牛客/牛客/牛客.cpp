//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//int gcd(int a, int b) {
//	return b == 0 ? a : gcd(b, a % b);
//}
//struct stsort {
//	bool operator () (const int a, const int b) const {
//		if (gcd(30, a) < gcd(30, b)) {
//			return 1;
//		}
//		else if (gcd(30, a) == gcd(30, b)) {
//			return a < b;
//		}
//		else return 0;
//	}
//};
//int main() {
//	int n = 5;
//	priority_queue<int, vector<int>, stsort>q;
//	for (int i = 1; i <= n; ++i) {
//		q.push(i);
//	}
//	for (int i = 1; i <= n; ++i) {
//		printf("%d", q.top());
//		q.pop();
//	}
//	return 0;
//}