//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double liter(int, int, int);

int main(void) {
	int sta, fin, use;

	printf("������� ����Ÿ��� ��ġ: ");
	scanf("%d", &sta);
	printf("�������� ����Ÿ��� ��ġ: ");
	scanf("%d", &fin);
	printf("��� ���ᷮ: ");
	scanf("%d", &use);

	double d=liter(sta, fin, use);

	printf("���� 1���ʹ� ���� �Ÿ��� %g", d);

	return 0;
}

double liter(int sta, int fin, int use) {
	double d = (fin - sta) / use;

	return d;
}