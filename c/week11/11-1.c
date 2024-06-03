//20210802 이수아
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define size 10
void line(void);
int GetIntegerArray(int [], int, int);
void PrintIntegerArray(int [], int);
double AverageIntegerArray(int[], int);

int main(void) {
	int grade[size], n;
	double av;

	printf("점수의 평균을 구하자\n");
	n=GetIntegerArray(grade, size, -1);
	line();
	PrintIntegerArray(grade, n);
	av=AverageIntegerArray(grade, n);
	printf("평균은 %g", av);

	return 0;
}

void line(void) {
	printf("------------------------------\n");
}

int GetIntegerArray(int grade[], int max_n, int s) {
	int i;
	for (i = 0; i < max_n; i++) {
		printf("점수 입력(종료할 때는 %d):", s);
		scanf("%d", &grade[i]);
		if (grade[i] == s) {
			break;
		}
	}
	return i;
}

void PrintIntegerArray(int grade[], int n) {
	printf("점수 : ");
	for (int i = 0; i < n; i++) {
		if (i < n - 1) { printf("%d, ", grade[i]); }
		else if (i == n - 1) { printf("%d\n", grade[i]); }
	}
}

double AverageIntegerArray(int grade[], int n) {
	int sum = 0;
	double av;
	for (int i = 0; i < n; i++) {
		sum += grade[i];
	}
	av = sum / n;

	return av;
}