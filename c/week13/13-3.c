//20210802 ÀÌ¼ö¾Æ
#include <stdio.h>

int sumRangeWithPosition(int*, int*);

int main(void) {
	int p[] = { 2,4,6,8,10,12,14,16,18,20 };
	int a;

	a=sumRangeWithPosition(&p[2], &p[7]);

	printf("%d", a);

	return 0;
}

int sumRangeWithPosition(int* pS, int* pE) {
	int a = 0;
	for (int i = 0; i <= pE-pS; i++) {
		a += *(pS + i);
	}
	
	return a;
}