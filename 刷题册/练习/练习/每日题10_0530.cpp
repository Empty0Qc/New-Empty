//���ӣ�https://www.nowcoder.com/questionTerminal/9fa70c9d7d3040fb869fe21775f8f9fb
/*��Դ��ţ����

�ֹ�˾Ҫ����һ��ҵ�����ϵͳ��Ҫ��ע�ỷ�ڵ�������Ҫ��ʾ�û��䰲ȫ�ȼ������밴���¹�����мƷ֣������ݲ�ͬ�ĵ÷�Ϊ������а�ȫ�ȼ����֡�

һ�����볤�� :

5 �� : С�ڵ���4 ���ַ�

10 �� : 5 ��7 �ַ�

25 �� : ���ڵ���8 ���ַ�

������ĸ :

0 �� : û����ĸ

10 �� : ȫ����С����д��ĸ

20 �� : ��Сд�����ĸ

�������� :

0 �� : û������

10 �� : 1 ������

20 �� : ����1 ������

�ġ����� :

0 �� : û�з���

10 �� : 1 ������

25 �� : ����1 ������

�塢���� :

2 �� : ��ĸ������

3 �� : ��ĸ�����ֺͷ���

5 �� : ��Сд��ĸ�����ֺͷ���

�������ֱ�׼ :

���ڵ���90 : �ǳ���ȫ

���ڵ���80 : ��ȫ

	 ���ڵ���70 : �ǳ�ǿ

			  ���ڵ��� 60 : ǿ

			  ���ڵ��� 50 : һ��

			  ���ڵ��� 25 : ��

		  ���ڵ���0 : �ǳ���



				  ��Ӧ���Ϊ��

				  VERY_WEAK,

				  WEAK,

				  AVERAGE,

				  STRONG,

				  VERY_STRONG,

				  SECURE,

				  VERY_SECURE


			  �������� :
		 ����һ���Զ�������


		 ������� :
		 �����Ӧ��ȫ�ȼ�
			 ʾ��1
			 ����
			 dgsayd$ % 12
			 ���
			 SECURE
*/
//PKyt&&fmE^`aBC)t$`Jh^^Rxr(EQ&!N(u)^)`
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int len = s.size(), sum = 0;
	//���ȼƷ�
	if (len <= 4)
		sum += 5;
	else if (len <= 7)
		sum += 10;
	else
		sum += 25;
	//��ĸ
	int c = 0, c_num = 0, f_num = 0;
	bool f = false, F = false, c_f = true, f_f = true;
	for (int i = 0; i < len; i++)
	{
		if (c > 1 && f && F)
		{
			sum += 20;
			break;
		}
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			c++; f = true;
		}
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			c++; F = true;
		}
		if (s[i] >= '0' && s[i] <= '9')
			c_num++;
		else
			f_num++;

	}
	if ((f && !F) || (!f && F) && c)
		sum += 10;
	//����
	if (c_num > 1)
		sum += 20;
	else if (c_num)
		sum += 10;
	else
		c_f = false;

	//�ַ�
	if (f_num > 1)
		sum += 25;
	else if (f_num)
		sum += 10;
	else
		f_f = false;
	//����
	if (f && F && c_f && f_f)
		sum += 5;
	else if ((f || F) && c_f && f_f)
		sum += 3;
	else if ((f || F) && c_f)
		sum += 2;
	//����
	if (sum >= 90)
		cout << "VERY_SECURE" << endl;
	else if (sum >= 80)
		cout << "SECURE" << endl;
	else if (sum >= 70)
		cout << "VERY_STRONG" << endl;
	else if (sum >= 60)
		cout << "STRONG" << endl;
	else if (sum >= 50)
		cout << "AVERAGE" << endl;
	else if (sum >= 25)
		cout << "WEAK" << endl;
	else if (sum >= 0)
		cout << "VERY_WEAK" << endl;
	return 0;
}