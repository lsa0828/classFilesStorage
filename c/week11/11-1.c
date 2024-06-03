//20210802 �̼���
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

	printf("������ ����� ������\n");
	n=GetIntegerArray(grade, size, -1);
	line();
	PrintIntegerArray(grade, n);
	av=AverageIntegerArray(grade, n);
	printf("����� %g", av);

	return 0;
}

void line(void) {
	printf("------------------------------\n");
}

int GetIntegerArray(int grade[], int max_n, int s) {
	int i;
	for (i = 0; i < max_n; i++) {
		printf("���� �Է�(������ ���� %d):", s);
		scanf("%d", &grade[i]);
		if (grade[i] == s) {
			break;
		}
	}
	return i;
}

void PrintIntegerArray(int grade[], int n) {
	printf("���� : ");
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