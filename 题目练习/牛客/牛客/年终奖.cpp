//https://www.nowcoder.com/questionTerminal/72a99e28381a407991f2c96d8cb238ab
//using namespace std;
//class Bonus {
//public:
//	int getMost(vector<vector<int>> board) {
//		// write code here
//		int length = board.size();
//		int wideth = board[0].size();
//		vector<vector<int>> allprice;
//		for (int i = 0; i < length; ++i)
//		{
//			vector<int> tmp(wideth, 0);
//			allprice.push_back(tmp);
//		}
//		allprice[0][0] = board[0][0];
//		for (int i = 0; i < length; ++i)
//		{
//			for (int j = 0; j < wideth; ++j)
//			{
//				if (i == 0 && j == 0)
//					;
//				else if (i == 0)
//				{
//					allprice[i][j] = allprice[i][j - 1] + board[i][j];
//				}
//				else if (j == 0)
//				{
//					allprice[i][j] = allprice[i - 1][j] + board[i][j];
//				}
//				else
//				{
//					allprice[i][j] = max(allprice[i][j - 1], allprice[i - 1][j]) + board[i][j];
//				}
//			}
//		}
//		return allprice[length - 1][wideth - 1];
//	}
//};
