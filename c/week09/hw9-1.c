//20210802 ÀÌ¼ö¾Æ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DisplayOdd(int, int, int);

int main(void) {
	DisplayOdd(1, 100, 5);

	return 0;
}

void DisplayOdd(int s, int e, int m) {
	int a=0;
	for (int i = s; i <= e; i++) {
		if ((i % m == 0) || (i % 2 == 0)) {
			continue;
		}
		else {
			printf("%2d ", i);
			a += 1;
			if (a == 10) {
				printf("\n");
				a = 0;
			}
		}
	}
}