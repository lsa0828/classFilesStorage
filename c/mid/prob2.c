//20210802 이수아
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SUN 's'
#define RAIN 'r'
#define SNOW 'w'

void PrepareOuting(int, char);

int main(void) {
	int num;
	char wea;

	printf("학번? ");
	scanf("%d", &num);
	printf("날씨?(s, r, w) ");
	scanf(" %c", &wea);

	PrepareOuting(num, wea);

	return 0;
}

void PrepareOuting(int num, char wea) {
	if (wea == SUN) {
		printf("%d님, 마스크와 선글라스를 챙기세요\n", num);
	}
	else if ((wea == RAIN) || (wea == SNOW)) {
		printf("%d님, 마스크와 우산을 챙기세요\n", num);
	}
	else {
		printf("%d님, 마스크를 챙기세요\n", num);
	}
}