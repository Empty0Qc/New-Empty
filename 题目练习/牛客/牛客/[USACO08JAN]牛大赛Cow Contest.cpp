#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int N, M;
	while (cin >> N >> M)
	{
		int cot = 0;
		vector<vector<int>> king(N + 1);
		vector<vector<int>> slave(N + 1);
		for (int i = 1;i <= M;++i)
		{
			int a, b;
			cin >> a >> b;
			king[b].push_back(a);
			slave[a].push_back(b);
		}
		for (int i = 1;i <= N;++i)
		{
			queue<int> q;
			vector<bool> book;
			bool flag = true;
			book.assign(N + 1, false);
			q.push(i);
			book[i] = true;
			while (!q.empty())
			{
				//�Ҵ�ܹ����ģ��Լ���� ��ʤ����ţ�� ��ţ
				int tmp = q.front();
				for (auto e : king[tmp])
				{
					if (book[e] == false)
					{
						q.push(e);
						book[e] = true;
					}
				}				
				q.pop();
			}
			q.push(i);
			while (!q.empty())
			{
				//������ܹ��ģ��Լ�������ܵ�ţ�����  ��ţ
				int tmp = q.front();
				for (auto e : slave[tmp])
				{
					if (book[e] == false)
					{
						q.push(e);
						book[e] = true;
					}
				}
				q.pop();
			}
			for (int i = 1;flag && i <= N;++i)
			{
				if (!book[i])
					flag = false;
			}	
			if (flag) ++cot;
		}
		cout << cot << endl;
	}
	return 0;
}