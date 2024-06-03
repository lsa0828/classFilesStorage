//20210802 이수아
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
	printf("1.cm를 인치로 변환\n");
	printf("2.인치를 cm로 변환\n");
	printf("3.프로그램 종료\n");
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
		printf(">> 선택: ");
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

	printf("\n인치로 변환할 cm는? ");
	scanf("%lf", &a);
	b = a / 2.54;
	printf("%.2f cm = %.2f inch\n\n", a, b);
}

void cm(void) {
	double a, b;

	printf("\ncm로 변환할 인치는? ");
	scanf("%lf", &a);
	b = a * 2.54;
	printf("%.2f inch = %.2f cm\n\n", a, b);
}