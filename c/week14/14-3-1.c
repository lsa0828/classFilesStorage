//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct person {
	char name[10];
	int phone;
	char address[30];
}personT;

personT InputPerson(void);
void PrintPerson(personT);

int main(void) {
	personT p1 = InputPerson();
	personT p2 = InputPerson();
	PrintPerson(p1);
	PrintPerson(p2);

	return 0;
}

personT InputPerson(void) {
	personT p;

	printf("�̸� : ");
	scanf(" %s", &p.name);
	printf("��ȭ��ȣ : ");
	scanf(" %d", &p.phone);
	printf("�ּ� : ");
	scanf(" %s", &p.address);

	return p;
}

void PrintPerson(personT p) {
	printf("�̸�:%s | ��ȭ��ȣ:%d | �ּ�:%s\n",
		p.name, p.phone, p.address);
}