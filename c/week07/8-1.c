#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Difference(double, double);

int main(void)
{
	double a, b;
	double res;

	printf("�� ���� �Է��ϼ��� : ");
	scanf("%lf %lf", &a, &b);

	res = Difference(a, b);

	printf("�� ���� ���� %g", res);

	return 0;
}

double Difference(double a, double b)
{
	double res;
	
	if (a >= b) res = a - b;
	else res = b - a;

	return res;
}