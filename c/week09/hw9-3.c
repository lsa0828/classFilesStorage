//20210802 이수아
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InputPositiveData(void);

int main(void) {
	int n;
	n = InputPositiveData();

	if (n >= 20) {
		printf("성년\n");
	}
	else {
		printf("미성년\n");
	}

	return 0;
}

int InputPositiveData(void) {
	int n;
	do {
		printf("당신의 나이는? ");
		scanf("%d", &n);
		if (n < 0) {
			printf("**다시 입력**\n");
			n = -1;
		}
	} while (n == -1);

	return n;
}