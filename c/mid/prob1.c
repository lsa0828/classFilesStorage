//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.14159265
double VSphere(double);

int main(void) {
	double r, v;

	printf("20210802 �̼���\n\n");

	printf("���� ��������? ");
	scanf("%lf", &r);
	if (r < 0) {
		printf("����: �������� ����� �Է��ϼ���.\n");
	}
	else {
		v = VSphere(r);
		printf("������ %g�� ���� ���Ǵ� %.3f�̴�.\n", r, v);
	}
	
	return 0;
}

double VSphere(double r) {
	double v;
	v = (4.0 / 3.0) * PI * (r * r * r);

	return v;
}