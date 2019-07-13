#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;
#define li long int
li num1, den1, num2, den2, num, den;
int gcd(int a, int b);
void print(int num, int den)
{
	int ggccdd = gcd(num, den);
	num = num / ggccdd;  den = den / ggccdd;
	long long p = num*den;
	num = abs(num); den = abs(den);
	if (p < 0) {
		printf("(-");
	}
	if (num == 0) {
		printf("0");
	}
	else if (den == 0) {
		printf("Inf");
	}
	else {
		int intPart = num / den;
		if (intPart) {
			printf("%d", intPart);
		}
		int fracPart = num%den;
		if (fracPart) {
			if (intPart) printf(" ");
			printf("%d/%d", fracPart, den);
		}
	}
	if (p<0) {
		printf(")");
	}
}

int gcd(int a, int b)
{
	int c;
	while (b) {
		c = a%b;
		a = b; b = c;
	}
	return a;
}
void Print(char c)
{
	print(num1, den1); printf(" %c ",c); print(num2, den2);
	printf(" = "); print(num, den); printf("\n");
}
int main()
{
	while (scanf("%d/%d %d/%d", &num1, &den1, &num2, &den2))
	{
		//加法
		num = num1 * den2 + num2 * den1;
		den = den1 * den2;
		Print('+');
		// 减法
		num = num1*den2 - num2*den1;
		Print('-');
		// 乘法
		num = num1*num2;
		Print('*');
		// 除法
		num = num1*den2; den = num2*den1;
		Print('/');
	}
	
	return 0;
}


