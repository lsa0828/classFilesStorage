//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InputPositiveData(void);

int main(void) {
	int n;
	n = InputPositiveData();

	if (n >= 20) {
		printf("����\n");
	}
	else {
		printf("�̼���\n");
	}

	return 0;
}

int InputPositiveData(void) {
	int n;
	do {
		printf("����� ���̴�? ");
		scanf("%d", &n);
		if (n < 0) {
			printf("**�ٽ� �Է�**\n");
			n = -1;
		}
	} while (n == -1);

	return n;
}