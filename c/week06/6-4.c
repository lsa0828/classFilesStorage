//20210802 이수아
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int change(int, int);

int main(void) {
	int money;

	printf("교환할 돈은 얼마입니까? ");
	scanf("%d", &money);

	int c500 = change(money, 500);
	money %= 500;
	int c100 = change(money, 100);
	money %= 100;
	int c50 = change(money, 50);
	money %= 50;
	int c10 = change(money, 10);
	money %= 10;

	printf("오백원짜리    : %d개\n", c500);
	printf("백원짜리      : %d개\n", c100);
	printf("오십원짜리    : %d개\n", c50);
	printf("십원짜리      : %d개\n", c10);
	printf("교환후 남은돈 : %d개\n", money);

	return 0;
}

int change(int money, int coin) {
	int num = money / coin;

	return num;
}