#include <stdio.h>

#define PI 3.141592865
void show_circle_area(int);

int main(void) {
	show_circle_area(1);
	show_circle_area(10);

	return 0;
}

void show_circle_area(int r) {
	double area = PI * r * r;
	printf("반지름이 %d인 원의 넓이 : %g\n", r, area);
}