//20210802 이수아
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

	printf("이름 : ");
	scanf(" %s", &p.name);
	printf("전화번호 : ");
	scanf(" %d", &p.phone);
	printf("주소 : ");
	scanf(" %s", &p.address);

	return p;
}

void PrintPerson(personT p) {
	printf("이름:%s | 전화번호:%d | 주소:%s\n",
		p.name, p.phone, p.address);
}