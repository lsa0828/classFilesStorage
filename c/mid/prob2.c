//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SUN 's'
#define RAIN 'r'
#define SNOW 'w'

void PrepareOuting(int, char);

int main(void) {
	int num;
	char wea;

	printf("�й�? ");
	scanf("%d", &num);
	printf("����?(s, r, w) ");
	scanf(" %c", &wea);

	PrepareOuting(num, wea);

	return 0;
}

void PrepareOuting(int num, char wea) {
	if (wea == SUN) {
		printf("%d��, ����ũ�� ���۶󽺸� ì�⼼��\n", num);
	}
	else if ((wea == RAIN) || (wea == SNOW)) {
		printf("%d��, ����ũ�� ����� ì�⼼��\n", num);
	}
	else {
		printf("%d��, ����ũ�� ì�⼼��\n", num);
	}
}