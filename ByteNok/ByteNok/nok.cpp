//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n, i = 0, count = 0;
//	cin >> n;
//	int *tmp = new int;
//	while (i < n * 3 && cin >> tmp[i++]);
//	sort(tmp, tmp + (n * 3));
//	i = n;
//	for (i = n; i < 2 * n; i++)
//	{
//		count += tmp[i];
//	}
//	cout << count;
//	return 0;
//}
#include <iostream>
using namespace std;

int main()
{
	int i = 0, j = 0;
	char tmp;
	char cmp;
	int arr[27] = { 0 };
	char zimu[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z', ' ' };
	int *a = new int;
	while (cin >> tmp && tmp != '.')
	{
		if (tmp == ' ')
		{
			a[i] = 26;
		}
		else
		{
			a[i] = (tmp - 'A') % 32;
			arr[a[i]]++;
		}
		i++;
	}
	while (cin >> cmp && (cmp <= 'Z' &&  cmp >= 'A') || (cmp <= 'z' && cmp >= 'a'))
	{
		arr[(cmp - 'A') % 32] = 0;
	}
	while (j < i)
	{
		if (a[j] == 26)
		{
			j++;
			cout << ' ';
		}
		else if (arr[a[j]] == 0)
		{
			j++;
			continue;
		}
		else
			cout << zimu[a[j++]];
	}
	return 0;
}