#include <iostream>
using namespace std;

class Book {
	string title;
	int money, pages;
public:
	Book(string t, int m, int p) {
		title = t;
		money = m;
		pages = p;
	}
	void show() {
		cout << title << ' ' << money << "�� " << pages << " ������" << endl;
	}
	friend void operator += (Book& a, int n);
	friend void operator -= (Book& b, int n);
};

void operator += (Book& a, int n) {
	a.money += n;
}
void operator -= (Book& a, int n) {
	a.money -= n;
}

int main() {
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}