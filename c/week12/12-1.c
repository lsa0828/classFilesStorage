//20210802 이수아
#include <stdio.h>

int StringLength(char[]);

int main(void) {
	int n;
	char str[] = "hello!";

	n = StringLength(str);

	printf("문자의 개수는 %d", n);

	return 0;
}

int StringLength(char s[]) {
	int n = 0;
	for (int i = 0; ; i++) {
		if (s[i] == '\0') break;
		else n += 1;
	}
	return n;
}