//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//int length, width;
//vector<vector<int>> maze;
//vector<vector<int>> path_tmp;
//vector<vector<int>> path_best;
//void _print(int i, int j)
//{
//	cout << "(" << i << "," << j << ")" << endl;
//}
//void dfs(int i, int j)
//{
//	maze[i][j] = 1;
//	path_tmp.push_back({ i, j });
//
//	if (i == length - 1 && j == width - 1)
//	{
//		if (path_best.empty() || path_best.size() > path_tmp.size())
//			path_best = path_tmp;
//	}
//	if (i - 1 >= 0 && maze[i - 1][j] == 0)
//		dfs(i - 1, j);
//	if (i + 1 < length && maze[i + 1][j] == 0)
//		dfs(i + 1, j);
//	if (j - 1 >= 0 && maze[i][j - 1] == 0)
//		dfs(i, j - 1);	
//	if (j + 1 < width && maze[i][j + 1] == 0)
//		dfs(i, j + 1);
//	maze[i][j] = 0;
//	path_tmp.pop_back();
//}
//int main()
//{
//
//	while (cin >> length >> width)
//	{
//		maze = vector<vector<int>>(length, vector<int>(width, 0));
//		path_best.clear();
//		path_tmp.clear();
//		for (int i = 0; i < length; i++)
//		{
//			for (int j = 0; j < width; j++)
//			{
//				cin >> maze[i][j];		
//			}
//		}
//		dfs(0, 0);
//		for (auto &e : path_best)
//			_print(e[0], e[1]);
//	}
//	//return 0;
//}