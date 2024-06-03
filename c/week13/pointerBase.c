#include <stdio.h>

int main(void) {
	int x, y;
	int *p1, *p2;

	x = -42;
	y = 163;
	p1 = &x;
	p2 = &y;

	*p1 = 17;
	*p1 = *p2;

	p1 = p2;

	printf("%d\n", *p1);
}