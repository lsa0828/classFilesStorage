#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int FindCharType(char);

int main(void) {
	char ch;
	int a;

	scanf("%c", &ch);

	a = FindCharType(ch);

	if (a == 1) {
		printf("스페이스 문자를 입력했음");
	}
	else if (a == 2) {
		printf("탭 문자를 입력했음");
	}
	else if (a == 3) {
		printf("개행 문자를 입력했음");
	}
	else if (a == 4) {
		printf("알파벳 및 숫자 문자를 입력했음");
	}
	else {
		printf("일반 문자를 입력했음");
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