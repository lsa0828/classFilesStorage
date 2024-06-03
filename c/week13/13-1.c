//20210802 �̼���
#include <stdio.h>

void ConvertTimeToHMS(int, int*, int*, int*);

int main(void) {
	int time = 5940;
	int hour, min, sec;

	ConvertTimeToHMS(time, &hour, &min, &sec);

	printf("%d�� : %d�� %d�� %d��\n", time, hour, min, sec);

	return 0;
}

void ConvertTimeToHMS(int t, int* h, int* m, int* s) {
	*h = t / 360;
	t = t - *h*360;
	*m = t / 60;
	t = t - *m*60;
	*s = t;
}