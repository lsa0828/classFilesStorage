//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double DivideReal(double);

int main(void) {
	double num, a= 0.0;
	printf("�Ǽ�: ");
	scanf("%lf", &num);

	a = DivideReal(num);
	
	printf("�����δ� %d�̰� �Ҽ��δ� %g�̴�.\n", (int)num, a);

	return 0;
}

double DivideReal(double num) {
	double a = num - (int)num;
	
	return a;
}