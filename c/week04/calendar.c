#include <stdio.h>

void introduce(void);
void DrawLine(void);
void showCal_2022_4(void);
void showCal_2022_5(void);
void ShowWeekday(void);

int main(void) {
	//���� ���
	introduce();

	printf("\n");

	//4�� �޷�
	showCal_2022_4();
	
	//5�� �޷�
	showCal_2022_5();
}

void introduce(void) {
	DrawLine();

	printf("��ǻ�Ͱ�������");
	printf("20210802 ");
	printf("�̼���\n");

	DrawLine();
}

void DrawLine(void) {
	printf("------------------------------\n");
}

void showCal_2022_4(void) {
	//��� ���
	printf("2022�� 4��\n");

	//���� ���
	ShowWeekday();

	//��¥ ���
	printf("                     1   2\n");
	printf("3    4   5   6   7   8   9\n");
	printf("10  11  12  13  14  15  16\n");
	printf("17  18  19  20  21  22  23\n");
	printf("24  25  26  27  28  29  30\n");
}

void showCal_2022_5(void) {
	//��� ���
	printf("2022�� 5��\n");

	//���� ���
	ShowWeekday();

	//��¥ ���
	printf(" 1   2   3   4   5   6   7\n");
	printf(" 8   9  10  11  12  13  14\n");
	printf("15  16  17  18  19  20  21\n");
	printf("22  23  24  25  26  27  28\n");
	printf("29  30  31\n");
}

void ShowWeekday(void) {
	printf("�� �� ȭ �� �� �� ��\n");
}