//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct person {
	char name[10];
	int phone;
	char address[30];
}personT;

void InputPersonList(personT[], int);
void PrintPersonList(personT[], int);

int main(void) {
	personT p[5];

	InputPersonList(p, 5);
	PrintPersonList(p, 5);

	return 0;
}

void InputPersonList(personT p[], int n) {
	for (int i = 0; i < n; i++) {
		printf("�̸� : ");
		scanf(" %s", &p[i].name);
		printf("��ȭ��ȣ : ");
		scanf(" %d", &p[i].phone);
		printf("�ּ� : ");
		scanf(" %s", &p[i].address);
	}
}

void PrintPersonList(personT p[], int n) {
	for (int i = 0; i < n; i++) {
		printf("�̸�:%s | ��ȭ��ȣ:%d | �ּ�:%s\n",
			p[i].name, p[i].phone, p[i].address);
	}
}