#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h.>

void Convert(int, int*, int*, int*);

int main(void) {
	int time;
	int* hour, * min, * sec;
	hour = (int*)malloc(sizeof * hour);
	min = (int*)malloc(sizeof * min);
	sec = (int*)malloc(sizeof * sec);

	printf("½Ã°£: ");
	scanf("%d", &time);
	Convert(time, hour, min, sec);
	printf("%d:%d:%d\n", *hour, *min, *sec);

	free(hour);
	free(min);
	free(sec);

	return 0;
}

void Convert(int time, int* h, int* m, int* s) {
	*h = time / 60 / 60;
	time -= *h * 60 * 60;
	*m = time / 60;
	time -= *m * 60;
	*s = time;
}