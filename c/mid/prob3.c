//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int exchange(int);

int main(void) {
	int lmn, lmn2;

	printf("20210802 �̼���\n\n");

	printf("�� �ڸ� ����: ");
	scanf("%d", &lmn);
	
	lmn2 = exchange(lmn);

	printf("%d + %d = %d\n", lmn, lmn2, lmn + lmn2);

	return 0;
}

int exchange(int a) {
	int a100, a10;
	a100 = a / 100;
	a %= 100;
	a10 = a / 10;
	a %= 10;
	a = a * 100 + a10 * 10 + a100;
	
	return a;
}