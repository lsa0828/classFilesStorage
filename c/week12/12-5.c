//20210802 �̼���
#include <stdio.h>

int StringComp(char[], char[]);

int main(void) {
	int n;
	char str1[] = "hello!";
	char str2[] = "hello";

	n = StringComp(str1, str2);
	if (n == 0) printf("�� ���ڿ��� ����.\n");
	else if (n == 1) printf("�� ���ڿ��� �ٸ���.\n");

	return 0;
}

int StringComp(char s1[], char s2[]) {
	int n = 0;
	for (int i = 0; s1[i]=='\0'; i++) {
		if (s1[i] != s2[i]) {
			n = 1;
			break;
		}
	}
	return n;
}