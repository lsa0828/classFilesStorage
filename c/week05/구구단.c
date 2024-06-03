#include <stdio.h>

void gugudan(int dan);


int main(void) {
	gugudan(2);
	gugudan(3);

	return 0;
}

void gugudan2(int dan) {
	printf("%d´Ü\n", dan);
	printf("-----\n");
	printf("%d x %d = %2d\n", dan, 1, dan * 1);
	printf("%d x %d = %2d\n", dan, 2, dan * 2);
	printf("%d x %d = %2d\n", dan, 3, dan * 3);
	printf("%d x %d = %2d\n", dan, 4, dan * 4);
	printf("%d x %d = %2d\n", dan, 5, dan * 5);
	printf("%d x %d = %2d\n", dan, 6, dan * 6);
	printf("%d x %d = %2d\n", dan, 7, dan * 7);
	printf("%d x %d = %2d\n", dan, 8, dan * 8);
	printf("%d x %d = %2d\n", dan, 9, dan * 9);
}