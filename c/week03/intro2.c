#include <stdio.h>

void introduce(void);
void drawLine(void);

int main(void) {
	introduce();
	printf("잘 부탁드립니다.\n");
	introduce();

	return 0;
}

void introduce(void) {
	drawLine();
	printf("컴퓨터공학전공 20210802이수아\n");
	drawLine();
}

void drawLine(void) {
	printf("----------------------------------------\n");
}