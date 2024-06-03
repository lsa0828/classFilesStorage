#include <stdio.h>

void introduce(void);
void DrawLine(void);
void showCal_2022_4(void);
void showCal_2022_5(void);
void ShowWeekday(void);

int main(void) {
	//정보 출력
	introduce();

	printf("\n");

	//4월 달력
	showCal_2022_4();
	
	//5월 달력
	showCal_2022_5();
}

void introduce(void) {
	DrawLine();

	printf("컴퓨터공학전공");
	printf("20210802 ");
	printf("이수아\n");

	DrawLine();
}

void DrawLine(void) {
	printf("------------------------------\n");
}

void showCal_2022_4(void) {
	//헤더 출력
	printf("2022년 4월\n");

	//요일 출력
	ShowWeekday();

	//날짜 출력
	printf("                     1   2\n");
	printf("3    4   5   6   7   8   9\n");
	printf("10  11  12  13  14  15  16\n");
	printf("17  18  19  20  21  22  23\n");
	printf("24  25  26  27  28  29  30\n");
}

void showCal_2022_5(void) {
	//헤더 출력
	printf("2022년 5월\n");

	//요일 출력
	ShowWeekday();

	//날짜 출력
	printf(" 1   2   3   4   5   6   7\n");
	printf(" 8   9  10  11  12  13  14\n");
	printf("15  16  17  18  19  20  21\n");
	printf("22  23  24  25  26  27  28\n");
	printf("29  30  31\n");
}

void ShowWeekday(void) {
	printf("일 월 화 수 목 금 토\n");
}