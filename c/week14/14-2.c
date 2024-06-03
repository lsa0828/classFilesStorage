//20210802 �̼���
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
	printf("������:(%d, %d) --> ����:(%d, %d)\n",
		d.p1.x, d.p1.y, d.p2.x, d.p2.y);
	printf("������ ����:%g\n", n);

	return 0;
}

lineT InputLine(void) {
	pointT p1;
	pointT p2;

	printf("�������� x ����? ");
	scanf("%d", &p1.x);
	printf("�������� y ����? ");
	scanf("%d", &p1.y);
	printf("������ x ����? ");
	scanf("%d", &p2.x);
	printf("������ y ����? ");
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