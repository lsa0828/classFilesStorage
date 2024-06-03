//20210802 이수아
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double DivideReal(double);

int main(void) {
	double num, a= 0.0;
	printf("실수: ");
	scanf("%lf", &num);

	a = DivideReal(num);
	
	printf("정수부는 %d이고 소수부는 %g이다.\n", (int)num, a);

	return 0;
}

double DivideReal(double num) {
	double a = num - (int)num;
	
	return a;
}