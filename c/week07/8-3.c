#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int IncomeTax(int);

int main(void)
{
	int a, tax;

	printf("수입 금액을 입력하세요 : ");
	scanf("%d", &a);

	tax = IncomeTax(a);

	printf("세금은 %d원입니다.", tax);

	return 0;
}

int IncomeTax(int a)
{
	int tax;
	if (a <= 10000000) tax = (int) (a * 0.008);
	else if (a <= 40000000) tax = (int) (a * 0.17);
	else if (a <= 80000000) tax = (int) (a * 0.26);
	else tax = (int) (a * 0.35);

	return tax;
}