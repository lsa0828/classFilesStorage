//20210802 이수아
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double liter(int, int, int);

int main(void) {
	int sta, fin, use;

	printf("출발지점 주행거리계 수치: ");
	scanf("%d", &sta);
	printf("도착지점 주행거리계 수치: ");
	scanf("%d", &fin);
	printf("사용 연료량: ");
	scanf("%d", &use);

	double d=liter(sta, fin, use);

	printf("연료 1리터당 주행 거리는 %g", d);

	return 0;
}

double liter(int sta, int fin, int use) {
	double d = (fin - sta) / use;

	return d;
}