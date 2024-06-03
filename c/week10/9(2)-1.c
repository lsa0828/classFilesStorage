//20210802 이수아
#include <stdio.h>

void multibyNumber(int start_dan);
void dantodan(int start_dan, int number);
void space(int number_of_spaces);

int main(void) {
	printf("### 구구단 표 ###\n");
	multibyNumber(2);
	printf("\n");
	multibyNumber(6);

	return 0;
}

void multibyNumber(int n) {
	for (int i = 1; i < 10; i++) {
		dantodan(n, i);
		printf("\n");
	}
}

void dantodan(int n, int i) {
	for (int k = n; k < n + 4; k++) {
		printf("%d x %d = %2d", k, i, k * i);
		space(5);
	}
}

void space(int a) {
	for (int j = 0; j < a; j++) {
		printf(" ");
	}
}