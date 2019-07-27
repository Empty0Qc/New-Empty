//#include <queue>
//#include <iostream>
//#include <vector>
//using namespace std;
//std::vector<std::vector<char>> maze(10, std::vector<char>(10));
//struct coord
//{
//	int x,y,level;
//};
//void dfs()
//{
//	const int path[4][2] = { {-1,0},{1,0},{0,1},{0,-1} };
//	std::queue<coord> q;
//	std::vector<std::vector<bool>> book(10, std::vector<bool>(10,false));
//	coord start{ 0,1,0 }, end{ 9,8,0 };
//	q.push(start);
//	book[start.x][start.y] = true;
//	while (!q.empty())
//	{
//		coord cur = q.front();
//		coord next;
//		q.pop();
//		for (int i = 0;i < 4;++i)
//		{
//			next.x = cur.x + path[i][0];
//			next.y = cur.y + path[i][1];
//			next.level = cur.level + 1;
//			if (next.x == end.x && next.y == end.y)
//			{
//				std::cout << next.level << std::endl;
//				return;
//			}
//			if (next.x >= 0 && next.x < 10 && next.y >= 0 && next.y < 10
//				&& !book[next.x][next.y] && maze[next.x][next.y] == '.')
//			{
//				q.push(next);
//				book[next.x][next.y] = true;
//			}
//		}
//	}
//	return;
//}
//int main()
//{
//
//	while (std::cin >> maze[0][0])
//	{
//		for (int i = 0;i < 10;++i)
//		{
//			for (int j = 0;j < 10;++j)
//			{
//				if (i == 0 && j == 0)
//					continue;
//				std::cin >> maze[i][j];
//			}
//		}
//		dfs();
//	}
//	return 0;
//}