//#include <iostream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <list>
//#include <algorithm>
//using namespace std;
//
////首先定义一个结构体 Peo: 编号 + 熟人链表 + 权值p（熟人个数）
//typedef struct Peo
//{
//	int id;
//	list<int> fri;
//	int p;
//
//}Peo;
//
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		int x, y;
//		//存放让出去考试的学生编号，最后按从小到大打印
//		vector<int> result;
//		vector<Peo> v(2 * n + 1);
//		for (int i = 0; i < 2 * n + 1; ++i)
//			v[i].id = i;
//		//初始化v中所有学生的id
//		v[0].p = -9999;
//		//v[0]仅为占位方便计算，p定义成-9999不会影响排序
//		for (int i = 0; i < m; ++i)
//		{
//			cin >> x >> y;
//			//接收好友关系
//			//x的好友列表 + y
//			//y的好友列表 + x
//			//各自权值+1
//			v[x].fri.push_back(y);
//			v[y].fri.push_back(x);
//			v[x].p++;
//			v[y].p++;
//		}
//		sort(v.begin(), v.end(), [](const Peo&a, const Peo&b) { return a.p > b.p; });
//		//按权值从小到大排序
//		while (1)
//		{
//			if (v[0].p <= 0)
//				break;
//			//如果排序后v[0]<0则意味着所有的熟人关系均已处理掉
//			if (v[0].p > 0)
//			{
//				for (auto &f : v[0].fri)
//				{
//					for (auto &e : v)
//					{
//						if (e.id == f)
//						{
//							--e.p;
//							break;
//						}
//					}
//				}
//				v[0].p = 0;
//				result.push_back(v[0].id);
//			}
//			sort(v.begin(), v.end(), [](const Peo&a, const Peo&b) { return a.p > b.p; });
//		}
//		cout << result.size() << endl;
//		for (auto e : result)
//		{
//			cout << e << endl;
//		}
//	}
//	return 0;
//}