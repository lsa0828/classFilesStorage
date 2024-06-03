#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Difference(double, double);

int main(void)
{
	double a, b;
	double res;

	printf("두 수를 입력하세요 : ");
	scanf("%lf %lf", &a, &b);

	res = Difference(a, b);

	printf("두 수의 차는 %g", res);

	return 0;
}

double Difference(double a, double b)
{
	double res;
	
	if (a >= b) res = a - b;
	else res = b - a;

	return res;
}