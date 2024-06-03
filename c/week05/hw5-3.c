//20210802 이수아
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.14159265

double show_circle_v(double, double);

int main(void) {
	double h, r, vol;

	printf("원기둥의 높이는? ");
	scanf("%lf", &h);
	printf("밑면의 반지름은? ");
	scanf("%lf", &r);
	vol = show_circle_v(h, r);

	printf("원기둥의 부피는 %g\n", vol);

	return 0;
}

double show_circle_v(double h, double r) {
	double area, vol;
	area = r * r * PI;
	vol = area * h;

	return vol;
}