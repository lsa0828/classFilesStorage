//20210802 �̼���
#include <stdio.h>

void ToUpperString(char[]);

int main(void) {
	char str[] = "Hi EveryOne~!";

	ToUpperString(str);

	return 0;
}

void ToUpperString(char s[]) {
	for (int i = 0; ; i++) {
		if (s[i] == '\0') break;
		else {
			if (s[i] >= 'a' && s[i] <= 'z') {
				s[i] = s[i] - 'a' + 'A';
			}
		}
	}
	printf("%s", s);
}