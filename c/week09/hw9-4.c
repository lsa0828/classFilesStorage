//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InputScore(void);
char GetGrade(int, int, int);

int main(void) {
	int a, b, c;
	char grade;

	for (int i = 0; i < 5; i++) {
		a = InputScore();
		b = InputScore();
		c = InputScore();

		grade = GetGrade(a, b, c);
		printf("����� ������ %c\n", grade);
	}

	return 0;
}

int InputScore(void) {
	int g, a;
	do {
		printf("����� ������? ");
		scanf("%d", &g);
		if ((g >= 0) && (g <= 100)) {
			a = 1;
		}
		else {
			a = 0;
			printf("(�ٽ� �Է�)");
		}
	} while (a == 0);

	return g;
}

char GetGrade(int a, int b, int c) {
	int g;
	g = (a + b + c) / 3;

	switch (g / 10) {
	case 10:
	case 9:
		return 'A'; break;
	case 8:
		return 'B'; break;
	case 7:
		return 'C'; break;
	case 6:
		return 'D'; break;
	default:
		return 'F'; break;
	}
}