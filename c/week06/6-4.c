//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int change(int, int);

int main(void) {
	int money;

	printf("��ȯ�� ���� ���Դϱ�? ");
	scanf("%d", &money);

	int c500 = change(money, 500);
	money %= 500;
	int c100 = change(money, 100);
	money %= 100;
	int c50 = change(money, 50);
	money %= 50;
	int c10 = change(money, 10);
	money %= 10;

	printf("�����¥��    : %d��\n", c500);
	printf("���¥��      : %d��\n", c100);
	printf("���ʿ�¥��    : %d��\n", c50);
	printf("�ʿ�¥��      : %d��\n", c10);
	printf("��ȯ�� ������ : %d��\n", money);

	return 0;
}

int change(int money, int coin) {
	int num = money / coin;

	return num;
}