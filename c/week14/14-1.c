//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point { int x, y; } pointT;

int IsEquals(pointT, pointT);

int main(void) {
	int n;
	pointT p1 = { 0, 0 };
	pointT p2 = { 0, 0 };

	n = IsEquals(p1, p2);

	if (n == 1) printf("�� ���� ��ǥ�� ����.\n");
	else printf("�� ���� ��ǥ�� �ٸ���.\n");

	return 0;
}

int IsEquals(pointT p1, pointT p2) {
	printf("ù��° ���� ��ǥ x, y��? ");
	scanf("%d, %d", &p1.x, &p1.y);
	printf("�ι�° ���� ��ǥ x, y��? ");
	scanf("%d, %d", &p2.x, &p2.y);

	if ((p1.x == p2.x) && (p1.y == p2.y)) {
		return 1;
	}
	else {
		return 0;
	}
}