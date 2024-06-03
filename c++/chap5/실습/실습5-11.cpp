#include <iostream>
using namespace std;

class Book {
	string title;
	int price;
public:
	Book(string title, int price) {
		this->title = title;
		this->price = price;
	}
	Book(const Book& s) {
		title = s.title;
		price = s.price;
	}
	void set(string title, int price) {
		this->title = title;
		this->price = price;
	}
	void show() { cout << title << ' ' << price << "원" << endl; }
};

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}