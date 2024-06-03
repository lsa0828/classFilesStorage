//20210802 이수아
#include <stdio.h>

#define size 5
int ArrayCmp(int [], int [], int);

int main(void) {
	int list1[size] = {10, 20, 30, 40, 50};
	int list2[size] = {10, 20, 33, 40, 50};
	int a;

	a=ArrayCmp(list1, list2, size);

	if (a == 1)
		printf("두 배열은 같다.\n");
	else if (a == 0)
		printf("두 배열은 다르다.\n");

	return 0;
}

int ArrayCmp(int a1[], int a2[], int s) {
	for (int i = 0; i < s; i++) {
		if (a1[i] != a2[i]) { 
			return 0;
			break; 
		}
	}
	return 1;
}