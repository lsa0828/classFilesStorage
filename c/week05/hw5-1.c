//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double n1, n2;
	char ch;

	printf("ù ��° �Ǽ���? ");
	scanf("%lf", &n1);
	printf("�� ��° �Ǽ���? ");
	scanf("%lf", &n2);
	printf("�ϳ��� ���ڴ�? ");
	scanf(" %c", &ch);
	printf("[%10g]\n[%10g]\n[%10c]\n", n1, n2, ch);

	return 0;
}