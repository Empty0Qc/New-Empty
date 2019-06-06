//https://www.nowcoder.com/practice/97ba57c35e9f4749826dc3befaeae109?tpId=37&tqId=21300&tPage=1&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int peam(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}
int main()
{
	int n;
	while (cin >> n)
	{
		int *sec = new int[];
		for (int i = 0; i < n; i++)
		{
			cin >> sec[i];
		}
		qsort(sec, n, sizeof(int), peam);
		set<char*> s;
	}
	return 0;
}