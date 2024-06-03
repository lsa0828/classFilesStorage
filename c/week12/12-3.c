//20210802 ÀÌ¼ö¾Æ
#include <stdio.h>

void StringCopy(char[], char[]);

int main(void) {
	char src[] = "hello~!";
	char dst[10] = "";

	StringCopy(dst, src);

	return 0;
}

void StringCopy(char d[], char s[]) {
	for (int i = 0; ; i++) {
		d[i] = s[i];
		if (s[i] == '\0') break;
	}
	printf("%s", d);
}