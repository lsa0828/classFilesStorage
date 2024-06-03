#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InputScore(void);
char GetGrade(int, int, int);

int main(void)
{
	int a, b, c;
	char res;

	a = InputScore();
	b = InputScore();
	c = InputScore();

	res = GetGrade(a, b, c);

	printf("학점은 %c입니다.\n", res);

	return 0;
}

int InputScore(void)
{
	int a;
	printf("점수를 입력하세요 : ");
	scanf("%d", &a);

	if (a >= 0 && a <= 100) return a;
	else return -1;
}

char GetGrade(int a, int b, int c)
{
	double res;
	res = (a + b + c) / 3;
	
	if (res >= 90) return 'A';
	else if (res >= 80) return 'B';
	else if (res >= 70) return 'C';
	else if (res >= 60) return 'D';
	else return 'F';
}