//20210802 이수아
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.14159265
double VSphere(double);

int main(void) {
	double r, v;

	printf("20210802 이수아\n\n");

	printf("구의 반지름은? ");
	scanf("%lf", &r);
	if (r < 0) {
		printf("오류: 반지름은 양수로 입력하세요.\n");
	}
	else {
		v = VSphere(r);
		printf("반지름 %g인 구의 부피는 %.3f이다.\n", r, v);
	}
	
	return 0;
}

double VSphere(double r) {
	double v;
	v = (4.0 / 3.0) * PI * (r * r * r);

	return v;
}