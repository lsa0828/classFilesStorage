//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu(void);
void line(int line_length);
int numberMenu(void);
void result(int);
void inch(void);
void cm(void);

int main(void) {
	int n;

	do {
		menu();
		n = numberMenu();
		if (n == 3) break;
		result(n);
	} while (1);

	return 0;
}

void menu(void) {
	line(20);
	printf("1.cm�� ��ġ�� ��ȯ\n");
	printf("2.��ġ�� cm�� ��ȯ\n");
	printf("3.���α׷� ����\n");
	line(20);
}

void line(int a) {
	for (int i = 0; i < a; i++) {
		printf("-");
	}
	printf("\n");
}

int numberMenu(void) {
	int n;
	do {
		printf(">> ����: ");
		scanf("%d", &n);
	} while (n < 1 || n>3);

	return n;
}

void result(int n) {
	switch (n) {
	case 1:
		inch(); break;
	case 2:
		cm(); break;
	}
}

void inch(void) {
	double a, b;

	printf("\n��ġ�� ��ȯ�� cm��? ");
	scanf("%lf", &a);
	b = a / 2.54;
	printf("%.2f cm = %.2f inch\n\n", a, b);
}

void cm(void) {
	double a, b;

	printf("\ncm�� ��ȯ�� ��ġ��? ");
	scanf("%lf", &a);
	b = a * 2.54;
	printf("%.2f inch = %.2f cm\n\n", a, b);
}