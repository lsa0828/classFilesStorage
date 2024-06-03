/*
File: hello.c
C 소스 코드의 기본 구조를 알아보기
*/

#include <stdio.h>

void ShowMessage(void);//ShowMessage함수 선언

int main(void)//main함수 정의, 함수 선언 따로 없음
{
	printf("시작\n");

	//환영 메시지를 출력
	ShowMessage();//ShowMessage함수 호출
	//ShowMessage함수 끝나면 자동으로 호출측으로 복귀

	printf("끝\n");

	return 0;
}

void ShowMessage(void)//ShowMesssage함수 정의
{
	printf("Hello World!\n");
	printf("Good job!\n");
}