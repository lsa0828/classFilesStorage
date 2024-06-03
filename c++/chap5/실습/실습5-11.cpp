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
	void show() { cout << title << ' ' << price << "��" << endl; }
};

int main() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}