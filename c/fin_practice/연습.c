#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* GetLine(void);

int main(void) {
	char* msg = GetLine();

	//if(msg != NULL)
	printf("%s\n", msg);
	
	free(msg);//해제함수

	return 0;
}

char* GetLine(void) {
	char a[100];
	scanf("%[^\n]", a);

	int len = 0;
	len = strlen(a);
	if (len == 0)
		return NULL;

	char* cp = (char*)malloc(len + 1);
	strcpy(cp, a);

	return cp;
}

//문장복사(strcpy)
//dest[]="Hi, hello!;
//int i;
//for(i=0; src[i]='\0'; i++){
//    dest[i]=src[i]
//}
//dest[i]='\0';