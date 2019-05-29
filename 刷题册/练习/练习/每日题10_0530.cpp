//链接：https://www.nowcoder.com/questionTerminal/9fa70c9d7d3040fb869fe21775f8f9fb
/*来源：牛客网

现公司要开发一个业务管理系统，要求注册环节的密码需要提示用户其安全等级，密码按如下规则进行计分，并根据不同的得分为密码进行安全等级划分。

一、密码长度 :

5 分 : 小于等于4 个字符

10 分 : 5 到7 字符

25 分 : 大于等于8 个字符

二、字母 :

0 分 : 没有字母

10 分 : 全都是小（大）写字母

20 分 : 大小写混合字母

三、数字 :

0 分 : 没有数字

10 分 : 1 个数字

20 分 : 大于1 个数字

四、符号 :

0 分 : 没有符号

10 分 : 1 个符号

25 分 : 大于1 个符号

五、奖励 :

2 分 : 字母和数字

3 分 : 字母、数字和符号

5 分 : 大小写字母、数字和符号

最后的评分标准 :

大于等于90 : 非常安全

大于等于80 : 安全

	 大于等于70 : 非常强

			  大于等于 60 : 强

			  大于等于 50 : 一般

			  大于等于 25 : 弱

		  大于等于0 : 非常弱



				  对应输出为：

				  VERY_WEAK,

				  WEAK,

				  AVERAGE,

				  STRONG,

				  VERY_STRONG,

				  SECURE,

				  VERY_SECURE


			  输入描述 :
		 输入一个自定义密码


		 输出描述 :
		 输出对应安全等级
			 示例1
			 输入
			 dgsayd$ % 12
			 输出
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
	//长度计分
	if (len <= 4)
		sum += 5;
	else if (len <= 7)
		sum += 10;
	else
		sum += 25;
	//字母
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
	//数字
	if (c_num > 1)
		sum += 20;
	else if (c_num)
		sum += 10;
	else
		c_f = false;

	//字符
	if (f_num > 1)
		sum += 25;
	else if (f_num)
		sum += 10;
	else
		f_f = false;
	//奖励
	if (f && F && c_f && f_f)
		sum += 5;
	else if ((f || F) && c_f && f_f)
		sum += 3;
	else if ((f || F) && c_f)
		sum += 2;
	//评分
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