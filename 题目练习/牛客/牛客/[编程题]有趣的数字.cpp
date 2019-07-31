//#include <map>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int num;
//	while (cin >> num) {
//		map<int, int> mp;
//		for (int i = 0;i < num;++i) {
//			int x;
//			cin >> x;
//			mp[x]++;
//		}
//		int min_num = 0, max_num = 0;
//		auto it1 = mp.begin(), it2 = --mp.end();
//		max_num = (it2->second) * (it1->second);
//		bool flag = true;
//		for (auto it = mp.begin();it != mp.end();it++) {
//			if (it->second >= 2) {
//				flag = false;
//				min_num += ((it->second)*(it->second - 1)) / 2;
//			}
//		}
//		auto pre = mp.begin(), cur = ++mp.begin();
//		int minnum = cur->first - pre->first;
//		while (flag&&cur != mp.end()) {
//			if (cur->first - pre->first == minnum)
//				min_num++;
//			if (cur->first - pre->first < minnum) {
//				minnum = cur->first - pre->first;
//				min_num = 1;
//			}
//			cur++;pre++;
//		}
//		cout << min_num << " " << max_num << endl;
//	}
//	return 0;
//}