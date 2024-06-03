//20210802 이수아
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double n1, n2;
	char ch;

	printf("첫 번째 실수는? ");
	scanf("%lf", &n1);
	printf("두 번째 실수는? ");
	scanf("%lf", &n2);
	printf("하나의 문자는? ");
	scanf(" %c", &ch);
	printf("[%10g]\n[%10g]\n[%10c]\n", n1, n2, ch);

	return 0;
}