//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.14159265

double show_circle_v(double, double);

int main(void) {
	double h, r, vol;

	printf("������� ���̴�? ");
	scanf("%lf", &h);
	printf("�ظ��� ��������? ");
	scanf("%lf", &r);
	vol = show_circle_v(h, r);

	printf("������� ���Ǵ� %g\n", vol);

	return 0;
}

double show_circle_v(double h, double r) {
	double area, vol;
	area = r * r * PI;
	vol = area * h;

	return vol;
}