#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	char grade;
	double x, y;
	
	printf("당신의 학번은? ");
	scanf("%d", &num);
    printf("당신의 학점(A/B/C/D/F)은? ");
    scanf(" %c", &grade); //공백중요 " %c"
	printf("%d의 학점은 %c입니다.\n", num, grade);
	
	printf("좌표? ");
	scanf("%lf,%lf", &x, &y);//scanf 안에 \n 써주면 안됨 출력에 쓸만한 것들 쓰면 안됨
	printf("(%g, %g)\n", x, y);


	char ch;

	scanf(" %c", &ch);
	printf("[%d]", ch);//문자의 코드 출력

	return 0;
}