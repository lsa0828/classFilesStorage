#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
	int year;
	string name;
	string author;
public:
	void setBook(int y, string n, string a) {
		year = y;
		name = n;
		author = a;
	}
	int getY() { return year; }
	string getN() { return name; }
	string getA() { return author; }
};

int main() {
	vector<Book> v;
	Book b;
	int year;
	string name, author;
	cout << "입고할 책을 입력하세요. 년도에 -1를 입력하면 입고를 종료합니다." << endl;
	while (true) {
		cout << "년도>>";
		cin >> year;
		if (year == -1) break;
		cin.ignore(1);
		cout << "책이름>>";
		getline(cin, name);
		cout << "저자>>";
		getline(cin, author);
		b.setBook(year, name, author);
		v.push_back(b);
	}
	cin.ignore(1);
	cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;
	cout << "검색하고자 하는 저자 이름을 입력하세요>>";
	getline(cin, author);
	for (int i = 0; i < v.size(); i++) {
		if (v.at(i).getA() == author)
			cout << v[i].getY() << "년도, " << v[i].getN() << ", " << v[i].getA() << endl;
	}
	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> year;
	for (int i = 0; i < v.size(); i++) {
		if (v.at(i).getY() == year)
			cout << v[i].getY() << "년도, " << v[i].getN() << ", " << v[i].getA() << endl;
	}
}