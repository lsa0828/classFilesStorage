#include <iostream>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
	/*
	Book& operator += (int n) {
		price += n;
		return *this;
	}
	Book& operator -= (int n) {
		price -= n;
		return *this;
	}*/
	friend void operator += (Book& a, int n);
	friend void operator -= (Book& a, int n);
};

void operator += (Book& a, int n) {
	a.price += n;
}
void operator -= (Book& a, int n) {
	a.price -= n;
}

int main() {
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}