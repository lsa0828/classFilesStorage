#include <stdio.h>

#define PI 3.141592865
void show_circle_area_1(void);
void show_circle_area_10(void);

int main(void) {
	show_circle_area_1();
	show_circle_area_10();
	
	return 0;
}

void show_circle_area_1(void) {
	double area = PI * 1 * 1;
	printf("�������� 1�� ���� ���� : %g\n", area);
}

void show_circle_area_10(void) {
	double area = PI * 10 * 10;
	printf("�������� 10�� ���� ���� : %g\n", area);
}