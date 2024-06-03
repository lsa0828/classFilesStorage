//20210802 ÀÌ¼ö¾Æ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double FtoC(int);

int main(void) {
	int F = 0;
	double C;

	printf("È­¾¾¿Âµµ? ");
	scanf("%d", &F);
	
	C = FtoC(F);

	printf("È­¾¾ %dµµ = ¼·¾¾ %.1fµµ\n", F, C);

	return 0;
}

double FtoC(int F) {
	double C = 5.0 / 9.0 * (F - 32);

	return C;
}