//#include <iostream>
//#include <vector>
//using namespace std;
//int v[4];
//bool book[4];
//int sum = 0;
//bool dfs(int num)
//{
//	bool f1, f2, f3, f4;
//	f1 = f2 = f3 = f4 = true;
//	if (num == 4)
//	{
//		if (sum == 24)
//			return true;
//		else
//			return false;
//	}
//	else
//	{
//		for (int i = 0;i < 4;++i)
//		{
//			if (book[i] == true)
//			{
//				book[i] = false;
//				sum += v[i];
//				f1 = dfs(num + 1);
//				sum -= v[i];
//				sum -= v[i];
//				f2 = dfs(num + 1);
//				sum += v[i];
//				if (sum != 0)
//				{
//					sum *= v[i];
//					f3 = dfs(num + 1);
//					sum /= v[i];
//					sum /= v[i];
//					f4 = dfs(num + 1);
//					sum *= v[i];
//				}
//				book[i] = true;
//			}
//		}
//	}
//	return (f1 || f2 || f3 || f4);
//
//}
//
//int main()
//{
//	while (cin >> v[0])
//	{
//		for (int i = 1;i < 4;++i)
//			cin >> v[i];
//		for (int i = 0;i < 4;++i)
//			book[i] = true;
//		if (dfs(0))
//			cout << "true" << endl;
//		else
//			cout << "false" << endl;
//	}
//	return 0;
//}

//
//#include <vector>
//#include <cstdio>
//#include <iostream>
//using namespace std;
//#define work(opt) nxt.clear();\
//            nxt.push_back(a opt b);\
//            for(int k = 0; k < v.size(); k ++)\
//                if(k != i && k != j) nxt.push_back(v[k]);\
//            if(dfs(k + 1, nxt)) {\
//                flag++;\
//            }
//
////work�ǳ���һ�ֲ��� 
//int a[4], pt;
//int flag;
//bool dfs(int k, const vector<int> & v) {
//	if (k == 3) return v.size() == 1 && v[0] == 24; //�ɹ� 
//	if (v.size() <= 1) return false;               //�������1~2���͵õ�24��ʧ�� 
//	vector<int> nxt;                               //��һ��״̬ 
//	for (size_t i = 0; i < v.size(); i++) {           //ö�ٵ�һ�������� 
//		for (size_t j = 0; j < v.size(); j++) {      //ö�ٵڶ��������� 
//			if (i == j) continue;
//			int a = v[i], b = v[j];
//			work(+); //���� +-*/
//			if (a > b) { work(-) }
//			work(*);
//			if (a % b == 0) { work(/ ) }
//		}
//	}
//	return false;
//}
//
//int main() {
//	cin >>a[0] >> a[1] >> a[2] >> a[3];
//	vector<int> s;
//	for (int i = 0; i < 4; i++)
//		s.push_back(a[i]);
//	dfs(0, s);
//	if(!flag)
//		cout << "false" << endl;
//	else
//		cout << "true" << endl;
//	return 0;
//}