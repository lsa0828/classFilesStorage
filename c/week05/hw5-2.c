//20210802 �̼���
#include <stdio.h>

#define PI 3.14159265

double show_circle_area(double);

int main(void) {
	double area1, area2;

	area1 = show_circle_area(1);
	area2 = show_circle_area(10);

	printf("�������� 1�� ���� ���̴� %g\n", area1);
	printf("�������� 10�� ���� ���̴� %g\n", area2);

	return 0;
}

double show_circle_area(double r) {
	double area;
	area = r * r * PI;

	return area;
}