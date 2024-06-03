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
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
	while (true) {
		cout << "�⵵>>";
		cin >> year;
		if (year == -1) break;
		cin.ignore(1);
		cout << "å�̸�>>";
		getline(cin, name);
		cout << "����>>";
		getline(cin, author);
		b.setBook(year, name, author);
		v.push_back(b);
	}
	cin.ignore(1);
	cout << "�� �԰�� å�� " << v.size() << "���Դϴ�." << endl;
	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>>";
	getline(cin, author);
	for (int i = 0; i < v.size(); i++) {
		if (v.at(i).getA() == author)
			cout << v[i].getY() << "�⵵, " << v[i].getN() << ", " << v[i].getA() << endl;
	}
	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
	cin >> year;
	for (int i = 0; i < v.size(); i++) {
		if (v.at(i).getY() == year)
			cout << v[i].getY() << "�⵵, " << v[i].getN() << ", " << v[i].getA() << endl;
	}
}