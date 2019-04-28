#include <iostream>
using namespace std;
//#include <deque>
#include <queue>
#include <functional>


int main()
{
	priority_queue<int,vector<int>,greater<int>> pq;
	pq.push(5);
	pq.push(2);
	pq.push(9);
	pq.push(3);
	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
	return 0;

}