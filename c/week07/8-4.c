#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int FindCharType(char);

int main(void) {
	char ch;
	int a;

	scanf("%c", &ch);

	a = FindCharType(ch);

	if (a == 1) {
		printf("�����̽� ���ڸ� �Է�����");
	}
	else if (a == 2) {
		printf("�� ���ڸ� �Է�����");
	}
	else if (a == 3) {
		printf("���� ���ڸ� �Է�����");
	}
	else if (a == 4) {
		printf("���ĺ� �� ���� ���ڸ� �Է�����");
	}
	else {
		printf("�Ϲ� ���ڸ� �Է�����");
	}

	return 0;
}

int FindCharType(char c) {
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')) || ((c >= '0') && (c <= '9')))
		return 4;
	switch (c) {
	case ' ':
		return 1; break;
	case'\t':
		return 2; break;
	case'\n':
		return 3; break;
	default :
		return 0; break;
	}


	/*
	if (c == ' ')
		return 1;
	if (c == '\t')
		return 2;
	if (c == '\n')
		return 3;
	else
		return 0;
	*/
}