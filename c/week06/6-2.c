//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double FtoC(int);

int main(void) {
	int F = 0;
	double C;

	printf("ȭ���µ�? ");
	scanf("%d", &F);
	
	C = FtoC(F);

	printf("ȭ�� %d�� = ���� %.1f��\n", F, C);

	return 0;
}

double FtoC(int F) {
	double C = 5.0 / 9.0 * (F - 32);

	return C;
}