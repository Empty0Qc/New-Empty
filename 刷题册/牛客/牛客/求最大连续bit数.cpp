//https://www.nowcoder.com/questionTerminal/4b1658fd8ffb4217bc3b7e85a38cfaf2


/*
����һ����ͨ����
#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;



int main()
{
	int n = 0;
	while (cin >> n)
	{
		int count = 0, Max = 0;
		while (n)
		{
			if (n & 1)
			{
				count++;
				Max = max(Max, count);
			}
			else
				count = 0;
			n = n >> 1;
		}
		cout << Max << endl;
	}
	return 0;
}
*/


/*
��������ת�����ַ������бȽϣ�ʵ������Щ����
#include <iostream>
#include <string>
#include <bitset>    // bitset
#include <sstream>   // stringstream
#include <algorithm> // max

using namespace std;

int main(){
	int n;
	while (cin >> n){
		bitset<8> bs(n); // ת������
		string s = bs.to_string(); // ת�ַ���
		stringstream ss(s);
		string tmp;
		int m = 0;
		while (getline(ss, tmp, '0')) // �ַ����ָ�
			m = max(m, (int)tmp.size()); // ������Ӵ�, ע��: max�������ͱ���һ��
		cout << m << endl;
	}
	return 0;
}
*/

/*
����������ǿ˼· byte

#include<iostream>
using namespace std;
int main()
{
	int byte;
	while (cin >> byte)
	{
		int k = 0;
		for (k = 0; byte != 0; k++)
		{
			byte = byte&(byte << 1);
		}
		cout << k << endl;
	}
	return 0;
}
*/