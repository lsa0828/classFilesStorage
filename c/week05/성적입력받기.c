#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	char grade;
	double x, y;
	
	printf("����� �й���? ");
	scanf("%d", &num);
    printf("����� ����(A/B/C/D/F)��? ");
    scanf(" %c", &grade); //�����߿� " %c"
	printf("%d�� ������ %c�Դϴ�.\n", num, grade);
	
	printf("��ǥ? ");
	scanf("%lf,%lf", &x, &y);//scanf �ȿ� \n ���ָ� �ȵ� ��¿� ������ �͵� ���� �ȵ�
	printf("(%g, %g)\n", x, y);


	char ch;

	scanf(" %c", &ch);
	printf("[%d]", ch);//������ �ڵ� ���

	return 0;
}