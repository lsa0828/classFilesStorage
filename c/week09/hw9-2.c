//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double FuelEfficiency(double, double);
int ContinueQ(void);

int main(void) {
	double sta, fin, fuel, d, f1d;
	int ans;

	do {
		printf("������� ����Ÿ��� ��ġ: ");
		scanf("%lf", &sta);
		printf("�������� ����Ÿ��� ��ġ: ");
		scanf("%lf", &fin);
		printf("���Կ��ᷮ��? ");
		scanf("%lf", &fuel);

		d = fin - sta;

		f1d = FuelEfficiency(fuel, d);
		printf("���� 1���ʹ� ���� �Ÿ��� %g\n", f1d);
		
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
		printf("�ٽ� ����ϰڽ��ϱ�?(Y/N) ");
		scanf(" %c", &ans);
		if ((ans == 'Y') || (ans == 'y')) {
			count = 1;
		}
		else if ((ans == 'N') || (ans == 'n')) {
			count = 0;
		}
		else {
			count = 2;
			printf("**Y �Ǵ� N(y �Ǵ� n)�� �����մϴ�.**\n");
		}
	} while (count == 2);
	
	return count;
}