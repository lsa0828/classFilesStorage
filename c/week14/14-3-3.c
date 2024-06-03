//20210802 �̼���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct person {
	char name[10];
	int phone;
	char address[30];
}personT;

void drawLine(void);
void viewList(personT[], int);
void searchName(personT[], int);
void addNewPhone(personT[], int);
void modifyPhone(personT[], int);
void delete(personT[], int);

int main(void) {
	personT p[10];
	int menu;
	int n = 0;

	while (1) {
		drawLine();
		printf("<�޴�>\n1)��ü ��� ����\n2)�̸����� �˻��Ͽ� ���� ����\n3)�� ����ó �߰��ϱ�\n4)���� ����ó �����ϱ�\n5)�����ϱ�\n6)�����ϱ� --> �����ȣ: ");
		scanf("%d", &menu);
		drawLine();
		if (menu == 1) viewList(p, n);
		else if (menu == 2) searchName(p, n);
		else if (menu == 3) {
			if (n == 9) {
				printf("�ּҷ��� ���� á���ϴ�.\n");
			}
			else {
				addNewPhone(p, n);
				n += 1;
			}
		}
		else if (menu == 4) modifyPhone(p, n);
		else if (menu == 5) {
			if (n == 0) {
				printf("������ �ּҷ��� �����ϴ�.\n");
			}
			else {
				delete(p, n);
				n -= 1;
			}
		}
		else if (menu == 6) break;
		else printf("�߸� �Է��߽��ϴ�.\n");
	}

	printf("���α׷��� ����Ǿ����ϴ�.\n");

	return 0;
}

void drawLine(void) {
	printf("------------------------------------------\n");
}

void viewList(personT p[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d. �̸�:%s | ��ȭ��ȣ:%d | �ּ�:%s\n",
			i+1, p[i].name, p[i].phone, p[i].address);
	}
}

void searchName(personT p[], int n) {
	char name[10];
	int a = 0;

	printf("���� ������ �̸� : ");
	scanf(" %s", &name);
	for (int i = 0; i < n; i++) {
		for (int j = 0; ; j++) {
			if (name[j] != p[i].name[j]) {
				break;
			}
			else if (name[j] == '\0') {
				printf("��ȭ��ȣ:%d | �ּ�:%s\n", p[i].phone, p[i].address);
				a = 1;
				break;
			}
		}
		if (a == 1) break;
	}
	if (a == 0) {
		printf("�׷� �̸��� �����ϴ�.\n");
	}
}

void addNewPhone(personT p[], int n) {
	printf("�̸� : ");
	scanf(" %s", &p[n].name);
	printf("��ȭ��ȣ : ");
	scanf("%d", &p[n].phone);
	printf("�ּ� : ");
	scanf(" %s", &p[n].address);
}

void modifyPhone(personT p[], int n) {
	char name[10];
	int a = 0;

	printf("������ ��ȭ��ȣ�� �ش� �̸� : ");
	scanf(" %s", &name);
	for (int i = 0; i < n; i++) {
		for (int j = 0; ; j++) {
			if (name[j] != p[i].name[j]) {
				break;
			}
			else if (name[j] == '\0') {
				printf("�ٲ� ��ȭ��ȣ : ");
				scanf("%d", &p[i].phone);
				a = 1;
				break;
			}
		}
		if (a = 1) break;
	}
	if (a == 0) {
		printf("�׷� �̸��� �����ϴ�.\n");
	}
}

void delete(personT p[], int n) {
	char name[10];
	int a = 0;

	printf("������ �̸� : ");
	scanf(" %s", &name);
	for (int i = 0; i < n; i++) {
		for (int j = 0; ; j++) {
			if (name[j] != p[i].name[j]) {
				break;
			}
			else if (name[j] == '\0') {
				for (int k = i; k < n; k++) {
					p[k] = p[k + 1];
				}
				//p[n - 1] = ;
				a = 1;
				break;
			}
		}
		if (a == 1) break;
	}
	if (a == 0) {
		printf("�׷� �̸��� �����ϴ�.\n");
	}
}