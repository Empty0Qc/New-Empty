#include<iostream>
using namespace std;
#if 0

//ϴ�� ��д
void shuffle(int* array,int size,int k)
{	
	if (k < 1)
		return;
	if (size % 2 == 0)
	{
		cout << "������ż����������" << endl;
	}
	int* temp = (int*)malloc(sizeof(int)*(size+1));
	temp[0] = 0;
	int i = size; 
	int m = size/2;
	if ((i - size/2) > 0)
	{
	for (int j = 1; j < size; j+=2)
		{
			temp[j] = array[i];
			temp[j + 1] = array[m];
			i -= 1;
			m--;
		}
	}
	for (int i = 0; i <= size; i++){
		array[i] = temp[i];
	}
	k = k - 1;
	shuffle(array, size, k);
}
int main()
{
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8 };//�˴�0��Ϊռλ��
	int size = sizeof(array) / sizeof(array[0]) - 1;
	int k;
	cout << "������Ҫϴ�ƵĴ�����";
	cin >> k;
	shuffle(array,size,k);
	for (int i = 1; i <= size; i++){
		cout << array[i] << " ";
	}
	return 0;
}

#endif


#if 0

//ţ�� ϴ��
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int T, n, k;
	cin >> T;
	while (T--)
	{
		cin >> n >> k;
		int num = 2 * n;
		vector<int> table(num);
		for (int i = 0; i < num; ++i)
			cin >> table[i];		
		while (k--)
		{
			vector<int> n1(table.begin(), table.end());
			for (int i = 0; i < n; ++i)
			{
				table[2 * i] = n1[i];
				table[2 * i + 1] = n1[i + n];
			}		
		}for (int i = 0; i < num - 1; ++i)
				cout << table[i] << " ";
			cout << table[num - 1] << endl;
	}
	return 0;
}
#endif

#if 0
#include<iostream>
#include<vector>
using namespace std;
class Bonus {
public:
	int getMost(vector<vector<int>> board) {
		// write code here
		int length = board.size();
		int wideth = board[0].size();
		vector<vector<int>> allprice;
		for (int i = 0; i < length; ++i)
		{
			vector<int> tmp(wideth,0);
			allprice.push_back(tmp);
		}
		allprice[0][0] = board[0][0];
		for (int i = 0; i < length; ++i)
		{
			for (int j = 0; j < wideth; ++j)
			{
				if (i == 0 && j == 0)
					;
				else if (i == 0)
				{
					allprice[i][j] = allprice[i][j - 1] + board[i][j];
				}
				else if (j == 0)
				{
					allprice[i][j] = allprice[i - 1][j] + board[i][j];
				}
				else
				{
					allprice[i][j] = max(allprice[i][j - 1], allprice[i - 1][j]) + board[i][j];
				}
			}
		}
		return allprice[length - 1][wideth - 1];
	}
};

#endif

#if 0

#include <iostream>
#include <string>
#define ADD( x , y ) ((x) + (y))
#define CMP( x , y ) ((x) > (y))
int main()
{
	long a, b, c;
	while (std::cin >> a >> b >> c)
	{
		if (CMP(ADD(a, b), c) && CMP(ADD(a, c), b) && CMP(ADD(c, b), a))
		{
			std::cout << "Yes" << std::endl;
		}
		else
		{
			std::cout << "No" << std::endl;
		}
	}
	return 0;
}

#endif
	
#if 0
//��̬�滮����

/*
�������д����Ͻ��ߵ����½ǵ�·�����ҵ�����·����
����f(i,j)��ʾ�����Ͻ��ߵ�����(i��j)���ܻ�õ������
*/
class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		int length = board.size();
		int wideth = board[0].size();
		vector<vector<int>> allPrice;
		for (int i = 0; i < length; i++) {
			vector<int> tmp(wideth, 0);
			allPrice.push_back(tmp);
		}
		allPrice[0][0] = board[0][0];
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < wideth; j++) {
				//�����������꣬�����κδ���
				if (i == 0 && j == 0)
					continue;
				//��������е��ٽ�ߣ�Ҳ���ǵ�һ�У���ô��ֻ��������
				//�����ߵ�ʱ��õ��Ҫ�������ֵ��������
				else if (i == 0) {
					allPrice[i][j] = allPrice[i][j - 1] + board[i][j];
				}
				//��������е��ٽ�ߣ�Ҳ���ǵ�һ�У���ô��ֻ��������
				//�����ߵ�ʱ��õ��Ҫ�������ֵ��������
				else if (j == 0) {
					allPrice[i][j] = allPrice[i - 1][j] + board[i][j];
				}
				else {
					//��ȥ�����ٽ�ߣ�ʣ�µľ��Ǽ��������ߣ�Ҳ�������ߣ�
					//��ʱ���Ҫ�����ߵ���ǰ������п��ܵ������Ҳ�����ߵ���ǰ��
					//����·���ĺ��ǲ�����Щ���е���õ�·�����������ˡ�
					allPrice[i][j] = max(allPrice[i][j - 1], allPrice[i - 1][j]) + board[i]
						[j];
				}
			}
		}
	}
};

#endif

#if 0

#include<iostream>
#include<vector>
using namespace std;
int N, M; //�ֱ�����к���
vector<vector<int>> maze;//�Թ�����
vector<vector<int>> path_temp;//�洢��ǰ·������һά��ʾλ��
vector<vector<int>> path_best;//�洢���·��
void MazeTrack(int i, int j)
{
	maze[i][j] = 1;//��ʾ��ǰ�ڵ����ߣ���������
	path_temp.push_back({ i, j });//����ǰ�ڵ���뵽·����
	if (i == N - 1 && j == M - 1) //�ж��Ƿ񵽴��յ�
	if (path_best.empty() || path_temp.size() < path_best.size())
		path_best = path_temp;
	if (i - 1 >= 0 && maze[i - 1][j] == 0)//̽���������Ƿ����
		MazeTrack(i - 1, j);
	if (i + 1 < N && maze[i + 1][j] == 0)//̽���������Ƿ����
		MazeTrack(i + 1, j);
	if (j - 1 >= 0 && maze[i][j - 1] == 0)//̽���������Ƿ����
		MazeTrack(i, j - 1);
	if (j + 1 < M && maze[i][j + 1] == 0)//̽���������Ƿ����
		MazeTrack(i, j + 1);
	maze[i][j] = 0; //�ָ��ֳ�����Ϊδ��
	path_temp.pop_back();
}
int main()
{
	while (cin >> N >> M)
	{
		maze = vector<vector<int>>(N, vector<int>(M, 0));
		path_temp.clear();
		path_best.clear();
		for (auto &i : maze)
		for (auto &j : i)
			cin >> j;
		MazeTrack(0, 0);//����Ѱ���Թ����ͨ·
		for (auto i : path_best)
			cout << '(' << i[0] << ',' << i[1] << ')' << endl;//���ͨ·
	}
	return 0;
}

#endif

#if 0

#include<iostream>
#include<vector>
using namespace std;

int N, M;
vector<vector<int>> maze;
vector<vector<int>> path_temp;
vector<vector<int>> path_best;
void MazeTrack(int i, int j)
{
	maze[i][j] = 1;
	path_temp.push_back({ i, j });

	if (i == N - 1 && j == M - 1)
	if (path_best.empty() || path_temp.size() < path_best.size())
		path_best = path_temp;
	if (i - 1 >= 0 && maze[i - 1][j] == 0)
		MazeTrack(i - 1, j);
	if (i + 1 < N && maze[i + 1][j] == 0)
		MazeTrack(i + 1, j);
	if (j - 1 >= 0 && maze[i][j - 1] == 0)
		MazeTrack(i, j - 1);
	if (j + 1 < M && maze[i][j + 1] == 0)
		MazeTrack(i, j + 1);
	maze[i][j] = 0;
	path_temp.pop_back();
}
int main()
{
	while (cin >> N >> M)
	{
		maze = vector<vector<int>>(N, vector<int>(M, 0));
		path_temp.clear();
		path_best.clear();
		for (auto &i : maze)
		for (auto &j : i)
			cin >> j;
		MazeTrack(0, 0);
		for (auto i : path_best)
		{
			cout << "(" << i[0] << "," << i[1] << ")" << endl;
		}
	}
	return 0;
}

#endif