//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DisplayTriangle(int);

int main(void) {
	int h;

	do {
		printf("�ﰢ���� ���̴�? ");
		scanf("%d", &h);
	} while (h <= 0);

	DisplayTriangle(h);

	return 0;
}

void DisplayTriangle(int h) {
	for (int i = 1; i <= h; i++) {
		for (int k = 0; k < h - i; k++) {
			printf(" ");
		}
		for (int n = 0; n < i; n++) {
			printf("*");
		}
		printf("\n");
	}
}