//#include <iostream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <list>
//#include <algorithm>
//using namespace std;
//
////���ȶ���һ���ṹ�� Peo: ��� + �������� + Ȩֵp�����˸�����
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
//		//����ó�ȥ���Ե�ѧ����ţ���󰴴�С�����ӡ
//		vector<int> result;
//		vector<Peo> v(2 * n + 1);
//		for (int i = 0; i < 2 * n + 1; ++i)
//			v[i].id = i;
//		//��ʼ��v������ѧ����id
//		v[0].p = -9999;
//		//v[0]��Ϊռλ������㣬p�����-9999����Ӱ������
//		for (int i = 0; i < m; ++i)
//		{
//			cin >> x >> y;
//			//���պ��ѹ�ϵ
//			//x�ĺ����б� + y
//			//y�ĺ����б� + x
//			//����Ȩֵ+1
//			v[x].fri.push_back(y);
//			v[y].fri.push_back(x);
//			v[x].p++;
//			v[y].p++;
//		}
//		sort(v.begin(), v.end(), [](const Peo&a, const Peo&b) { return a.p > b.p; });
//		//��Ȩֵ��С��������
//		while (1)
//		{
//			if (v[0].p <= 0)
//				break;
//			//��������v[0]<0����ζ�����е����˹�ϵ���Ѵ����
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