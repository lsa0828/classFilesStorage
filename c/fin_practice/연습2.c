#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main(void) {
	int a;
	char c;
	char str[5];

	printf("����: ");
	scanf("%d", &a);
	printf("����: ");
	scanf(" %c", &c);
	printf("���ڿ�: ");
	scanf("%s", str);

	return 0;
}*/
/*
int main(void) {
	int i = 3;
	int x = 4, y = 4;
	x = ++x;
	y = y++;

	printf("�� �������δ� x�� 16, y�� 12\n");
	printf("x�� %d, y�� %d", x, y);

	return 0;
}*/
/*
int main(void) {
	char a[10] = "hello";

	int b = sizeof(a);
	printf("%d", b);

	return 0;
}*/
/*
int main(void) {
	int i;
	for(i=0; i<=5; i++){}
	printf("%d", i);
}*/
/*
int main(void) {
	char msg[10];

	printf("1. ");
	scanf("%s", msg);
	printf("2. ");
	scanf("%[^\n]", msg);
	printf("3. ");
	scanf(" %[^\n]", msg);

	return 0;
}*/
/*
int main(void) {
	int x, y;
	int* p1, * p2;

	x = -42;
	y = 163;

	p1 = &x;
	p2 = &y;

	*p1 = 17;
	*p1 = *p2;

	p1 = p2;

	return 0;
}*/

void Fn(int, int);

int main(void) {
	int x = 13;
	int* p = &x;
	int n = 0;

	Fn(*p, n);

	return 0;
}

void Fn(int p, int n) {

}