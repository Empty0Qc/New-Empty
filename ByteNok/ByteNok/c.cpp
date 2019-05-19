//#include<iostream>
//#include<string>
//#include<cstdio>
//#include<algorithm>
//using namespace std;

#if 1


#endif
#if 0
int n, i = 0;
void _move(string m[],int x,int num,int *len)
{
	while (num < *len)
	{
		m[x][num] = m[x][num + 1];
		num++;
	}
}
void Allcheck(string sss[],int x,int *len)
{
	i = 1;
	int count = 0;
	if (*len < 4)
	{
		if (sss[x][0] == sss[x][1] && sss[x][1] == sss[x][2])
		{
			sss[2] = '\0';
			*len--;
		}
		return;
	}
	while (i < *len - 1 - count)
	{
		if (i < *len - 1 && sss[x][i - 1] == sss[x][i] && sss[x][i] == sss[x][i + 1])
		{
			_move(sss, x, i + 1, len);
			count++;
		}
		else if (i < *len - 2 && sss[x][i - 1] == sss[x][i] && sss[x][i + 1] == sss[x][i + 2])
		{
			_move(sss, x, i + 2, len);
			count++;
		}
		else
			i++;
	}

}
void check(string ss[])
{
	int len,j = 0;
	for (j = 0; j < n; j++)
	{
		len = ss[j].size();
		if (len < 3)
			continue;
		else
		{
			Allcheck(ss,j,&len);
		}
	}
}

char * dealstr(char * dst, char * src)
{
	int i, j = 0, len = strlen(src);

	for (i = 0; src[i]; i++)
	{
		if (i + 2 < len && src[i] == src[i + 1] && src[i + 1] == src[i + 2])
		{
			continue;
		}
		else if (i + 3 < len && src[i] == src[i + 1] && src[i + 2] == src[i + 3])
		{
			strncpy(dst + j, src + i, 2);
			j += 2;
			i += 3;
			while (src[i] == src[i + 1])
			{
				i++;
			}
		}

		dst[j] = src[i];
		j++;
	}
	return dst;
}

int main()
{
	int n;
	int i;
	cin >> n;
	char str[10240] = { 0 };
	char tmp[10240] = { 0 };

	for (i = 0; i < n; i++)
	{
		cin >> str;
		cout << dealstr(tmp, str) << endl;
		memset(tmp, 0, 10240);
	}
	return 0;
}

#endif

#if 0
//埋伏

long long C(long long n)
{
	return (n - 1) * n / 2;
}
long long Select(long long arr[], long long d, long long n)
{
	if (n < 3)
		return 0;
	long long i = 0, j = 2, count = 0;
	while (j < n)
	{
		if (j - i < 2)
		{
			j++;
		}
		else if (arr[j] - arr[i] > d)
		{
			i++;
		}
		else if (arr[j] - arr[i] <= d)
		{
			count += C(j - i);
			j++;
		}
	}
	return count;
}

//10 4
//7 8 9 10 15 16 18 20 23 25
//    1 4  4  4  5  6  6  6
int main()
{
	long long n, d, i, j = 0;
	cin >> n;
	cin >> d;
	long long *arr = (long long*)calloc(sizeof(long long), (size_t)n);
	i = n;
	while (i)
	{
		cin >> arr[j++];
		i--;
	}
	cout << Select(arr, d, n);
	free(arr);
	return 0;
}

#endif

#if 0
//异或 给定整数m以及n各数字A1,A2,..An，将数列A中所有元素两两异或，
//共能得到n(n-1)/2个结果，请求出这些结果中大于m的有多少个。
//https://www.nowcoder.com/questionTerminal/fc05f68c5f47438db54c6923ef23cf4a
//暴力破解法
int main()
{
	int n, m, count = 0, j, i = 0;
	cin >> n >> m;
	int *arr = new int[n];
	while (i < n && cin >> arr[i++]);
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			(arr[i] ^ arr[j]) > m ? count++ : 1;
		}
	}
	cout << count << endl;
	return 0;
}

#endif