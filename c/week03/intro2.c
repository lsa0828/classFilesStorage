#include <stdio.h>

void introduce(void);
void drawLine(void);

int main(void) {
	introduce();
	printf("�� ��Ź�帳�ϴ�.\n");
	introduce();

	return 0;
}

void introduce(void) {
	drawLine();
	printf("��ǻ�Ͱ������� 20210802�̼���\n");
	drawLine();
}

void drawLine(void) {
	printf("----------------------------------------\n");
}