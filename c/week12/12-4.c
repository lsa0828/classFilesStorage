//20210802 ÀÌ¼ö¾Æ
#include <stdio.h>

void StringConcat(char[], char[]);

int main(void) {
	char str1[10] = "hi!";
	char str2[10] = "Hello~";

	StringConcat(str1, str2);

	return 0;
}

void StringConcat(char s1[], char s2[]) {
	int i;
	for (i = 0; ; i++) {
		if (s1[i] == '\0') break;
	}
	for (int j = 0; ; j++) {
		s1[i + j] = s2[j];
		if (s2[j] == '\0') break;
	}

	printf("%s", s1);
}