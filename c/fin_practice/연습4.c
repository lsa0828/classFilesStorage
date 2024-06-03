#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct MUS{
	char title[100];
	int year;
	int num[10];
} MUSIC;

int main(void) {
	MUSIC = {"yest", 100, { 1, 2, 3 }};
	/*
	char a[100] = "Yesterday";
	for (int i = 0; ; i++) {
		m.title[i] = a[i];
		if (a[i] == '\0') break;
	}
	printf("%s", m.title);
	for (int i = 0; i < 5; i++) {
		scanf("%s", ml[i].title);
		scanf("%d", &ml[i].year);
	}
	return 0;*/
}