//20210802 이수아
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct point {
	int x, y;
} pointT;

typedef struct line {
	pointT p1;
	pointT p2;
} lineT;

lineT InputLine(void);
double GetLineLength(lineT);

int main(void) {
	double n;
	lineT d;

	d = InputLine();
	n = GetLineLength(d);
	printf("-----------------------\n");
	printf("시작점:(%d, %d) --> 끝점:(%d, %d)\n",
		d.p1.x, d.p1.y, d.p2.x, d.p2.y);
	printf("선분의 길이:%g\n", n);

	return 0;
}

lineT InputLine(void) {
	pointT p1;
	pointT p2;

	printf("시작점의 x 값은? ");
	scanf("%d", &p1.x);
	printf("시작점의 y 값은? ");
	scanf("%d", &p1.y);
	printf("끝점의 x 값은? ");
	scanf("%d", &p2.x);
	printf("끝점의 y 값은? ");
	scanf("%d", &p2.y);

	lineT d = { p1, p2 };

	return d;
}

double GetLineLength(lineT d) {
	double n, nx, ny;

	nx = d.p2.x - d.p1.x;
	ny = d.p2.y - d.p1.y;
	n = sqrt(nx * nx + ny * ny);

	return n;
}