/*
File: hello.c
C �ҽ� �ڵ��� �⺻ ������ �˾ƺ���
*/

#include <stdio.h>

void ShowMessage(void);//ShowMessage�Լ� ����

int main(void)//main�Լ� ����, �Լ� ���� ���� ����
{
	printf("����\n");

	//ȯ�� �޽����� ���
	ShowMessage();//ShowMessage�Լ� ȣ��
	//ShowMessage�Լ� ������ �ڵ����� ȣ�������� ����

	printf("��\n");

	return 0;
}

void ShowMessage(void)//ShowMesssage�Լ� ����
{
	printf("Hello World!\n");
	printf("Good job!\n");
}