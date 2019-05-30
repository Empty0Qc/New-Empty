//123456789 2
//   8//12,23,34,45,56,67,78,89

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void cut(string s, int n, int len)
{
	if (len < n)
		return;
	char* a = new char[512], k = 0;
	int count = 0;
	for (int i = 0; i < len - n + 1; i++)
	{
		vector<int> arr;
		vector<int> tmp;
		bool f = true;
		for (int j = 0; j < n; j++)
		{
			arr.push_back(s[j+i] - '0');
		}
		tmp = arr;
		sort(arr.begin(),arr.begin()+n);
		for (int j = 0; f && j < n - 1; j++)
		{
			if (arr[j] != arr[j + 1] && arr[j] != arr[j+1] - 1)
				f = false;
		}
		if (f)
		{
			for (int j = 0; j < n; j++)
			{
				a[k++] = tmp[j] + '0';
			}
			a[k++] = ',';
			count++;
		}
		arr.clear();
		tmp.clear();
	}
	cout << count << " // ";
	for (int i = 0; i < k - 1; i++)
	{
		cout << a[i];
	}
}

int main()
{
	string s;
	int n;
	while (cin >> s >> n)
	{
		int len = s.size();
		cut(s, n, len);
		cout << endl;
	}
	return 0;
}