//20210802 ÀÌ¼ö¾Æ
#include <stdio.h>

int sumRangeWithIndex(int*, int, int);

int main(void) {
	int array[]={2,4,6,8,10,12,14,16,18,20};
	int a;

	a=sumRangeWithIndex(&array, 2, 7);

	printf("%d", a);

	return 0;
}

int sumRangeWithIndex(int* array, int s, int e) {
	int a = 0;
	for (int i = 0; i <= array[e]-array[s]; i++) {
		if (array+i>=&array[s] && array+i<=&array[e]) { a += *(array + i); }
	}
	return a;
}