//20210802 이수아
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
		printf("<메뉴>\n1)전체 목록 보기\n2)이름으로 검색하여 정보 보기\n3)새 연락처 추가하기\n4)기존 연락처 수정하기\n5)삭제하기\n6)종료하기 --> 실행번호: ");
		scanf("%d", &menu);
		drawLine();
		if (menu == 1) viewList(p, n);
		else if (menu == 2) searchName(p, n);
		else if (menu == 3) {
			if (n == 9) {
				printf("주소록이 가득 찼습니다.\n");
			}
			else {
				addNewPhone(p, n);
				n += 1;
			}
		}
		else if (menu == 4) modifyPhone(p, n);
		else if (menu == 5) {
			if (n == 0) {
				printf("삭제할 주소록이 없습니다.\n");
			}
			else {
				delete(p, n);
				n -= 1;
			}
		}
		else if (menu == 6) break;
		else printf("잘못 입력했습니다.\n");
	}

	printf("프로그램이 종료되었습니다.\n");

	return 0;
}

void drawLine(void) {
	printf("------------------------------------------\n");
}

void viewList(personT p[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d. 이름:%s | 전화번호:%d | 주소:%s\n",
			i+1, p[i].name, p[i].phone, p[i].address);
	}
}

void searchName(personT p[], int n) {
	char name[10];
	int a = 0;

	printf("정보 열람할 이름 : ");
	scanf(" %s", &name);
	for (int i = 0; i < n; i++) {
		for (int j = 0; ; j++) {
			if (name[j] != p[i].name[j]) {
				break;
			}
			else if (name[j] == '\0') {
				printf("전화번호:%d | 주소:%s\n", p[i].phone, p[i].address);
				a = 1;
				break;
			}
		}
		if (a == 1) break;
	}
	if (a == 0) {
		printf("그런 이름은 없습니다.\n");
	}
}

void addNewPhone(personT p[], int n) {
	printf("이름 : ");
	scanf(" %s", &p[n].name);
	printf("전화번호 : ");
	scanf("%d", &p[n].phone);
	printf("주소 : ");
	scanf(" %s", &p[n].address);
}

void modifyPhone(personT p[], int n) {
	char name[10];
	int a = 0;

	printf("수정할 전화번호의 해당 이름 : ");
	scanf(" %s", &name);
	for (int i = 0; i < n; i++) {
		for (int j = 0; ; j++) {
			if (name[j] != p[i].name[j]) {
				break;
			}
			else if (name[j] == '\0') {
				printf("바뀐 전화번호 : ");
				scanf("%d", &p[i].phone);
				a = 1;
				break;
			}
		}
		if (a = 1) break;
	}
	if (a == 0) {
		printf("그런 이름은 없습니다.\n");
	}
}

void delete(personT p[], int n) {
	char name[10];
	int a = 0;

	printf("삭제할 이름 : ");
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
		printf("그런 이름은 없습니다.\n");
	}
}