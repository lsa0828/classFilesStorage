#include <iostream>
#include <string>

using namespace std;

class Date {
	int year, month, day;
public:
	Date(int y, int m, int d);
	Date(string c);
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
	void show() { cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl; }
};

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

Date::Date(string c) : Date(0, 0, 0) {
	int a = 0, b;
	for (int i = 0; i < c.length(); i++) {
		if (c[i] == '/' && a==0) {
			year = stoi(c.substr(0, i));
			a += 1;
			b = i;
		}
		else if (c[i] == '/' && a == 1) {
			month = stoi(c.substr(b + 1, i));
			day = stoi(c.substr(i + 1, c.length()));
		}
	}
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}