//20210802 이수아
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double FuelEfficiency(double, double);
int ContinueQ(void);

int main(void) {
	double sta, fin, fuel, d, f1d;
	int ans;

	do {
		printf("출발지점 주행거리계 수치: ");
		scanf("%lf", &sta);
		printf("도착지점 주행거리계 수치: ");
		scanf("%lf", &fin);
		printf("주입연료량은? ");
		scanf("%lf", &fuel);

		d = fin - sta;

		f1d = FuelEfficiency(fuel, d);
		printf("연료 1리터당 주행 거리는 %g\n", f1d);
		
		ans = ContinueQ();
	} while (ans == 1);

	return 0;
}

double FuelEfficiency(double f, double d) {
	double f1d;
	f1d = d / f;

	return f1d;
}

int ContinueQ(void) {
	char ans;
	int count;

	do {
		printf("다시 계산하겠습니까?(Y/N) ");
		scanf(" %c", &ans);
		if ((ans == 'Y') || (ans == 'y')) {
			count = 1;
		}
		else if ((ans == 'N') || (ans == 'n')) {
			count = 0;
		}
		else {
			count = 2;
			printf("**Y 또는 N(y 또는 n)만 가능합니다.**\n");
		}
	} while (count == 2);
	
	return count;
}