//20210802 이수아
#include <stdio.h>

void ConvertTimeToHMS(int, int*, int*, int*);

int main(void) {
	int time = 5940;
	int hour, min, sec;

	ConvertTimeToHMS(time, &hour, &min, &sec);

	printf("%d초 : %d시 %d분 %d초\n", time, hour, min, sec);

	return 0;
}

void ConvertTimeToHMS(int t, int* h, int* m, int* s) {
	*h = t / 360;
	t = t - *h*360;
	*m = t / 60;
	t = t - *m*60;
	*s = t;
}