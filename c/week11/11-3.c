//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define size 5
int findNum(void);
int findIndex(int [], int, int);

int main(void) {
	int list[size] = { 11, 22, 33, 44, 55 };
	int n, i;

	n=findNum();
	i=findIndex(list, n, size);

	if (i == -1)
		printf("%d�� ��Ͽ� �����ϴ�.\n", n);
	else
		printf("%d�� ��� %d�� �ֽ��ϴ�.\n", n, i);

	return 0;
}

int findNum(void) {
	int n;
	printf("ã���� �ϴ� ����? ");
	scanf("%d", &n);

	return n;
}

int findIndex(int list[], int n, int s) {
	for (int i = 0; i < s; i++) {
		if (n == list[i]) {
			return i;
			break;
		}
	}
	return -1;
}