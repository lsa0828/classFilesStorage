//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void readNum(int);
void Num(int);

int main(void) {
	int a;

	scanf("%d", &a);

	Num(a);

	return 0;
}

void Num(int a) {
	int b;
	b = a / 100;
	readNum(b);
	a %= 100;
	b = a / 10;
	readNum(b);
	a %= 10;
	readNum(a);
}

void readNum(int a) {
	switch (a) {
	case 0:
		printf("zero "); break;
	case 1:
		printf("one "); break;
	case 2:
		printf("two "); break;
	case 3:
		printf("three "); break;
	case 4:
		printf("four "); break;
	case 5:
		printf("five "); break;
	case 6:
		printf("six "); break;
	case 7:
		printf("seven "); break;
	case 8:
		printf("eight "); break;
	case 9:
		printf("nine "); break;
	}
}