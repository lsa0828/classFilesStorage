#include <iostream>
#include <string>
using namespace std;

class Product {
	int id;
	string description;
	string producer;
	int price;
public:
	Product() { 
		id = 0; 
		description = ""; 
		producer = ""; 
		price = 0;
	}
	Product(int id, string description, string producer, int price) { 
		this->id = id;
		this->description = description;
		this->producer = producer;
		this->price = price;
	}
	int getId() { return id; }
	string getDesc() { return description; }
	string getProd() { return producer; }
	int getPrice() { return price; }
	virtual void show() = 0;
};

class Book : public Product {
	int ISBN;
	string author;
	string title;
public:
	Book(int id, string description, string producer, int price, int ISBN, string author, string title) : Product(id, description, producer, price) {
		this->ISBN = ISBN;
		this->author = author;
		this->title = title;
	}
	int getISBN() { return ISBN; }
	string getAuth() { return author; }
	string getTitle() { return title; }
	void show() {
		cout << "--- ��ǰID : " << getId() << endl;
		cout << "��ǰ���� : " << getDesc() << endl;
		cout << "������ : " << getProd() << endl;
		cout << "���� : " << getPrice() << endl;
		cout << "ISBN : " << ISBN << endl;
		cout << "å��� : " << title << endl;
		cout << "���� : " << author << endl;
	}
};

class CompactDisc : public Product {
	string title;
	string singer;
public:
	CompactDisc(int id, string description, string producer, int price, string title, string singer) : Product(id, description, producer, price) {
		this->title = title;
		this->singer = singer;
	}
	void show() {
		cout << "--- ��ǰID : " << getId() << endl;
		cout << "��ǰ���� : " << getDesc() << endl;
		cout << "������ : " << getProd() << endl;
		cout << "���� : " << getPrice() << endl;
		cout << "�ٹ����� : " << title << endl;
		cout << "���� : " << singer << endl;
	}
};

class ConversationBook : public Book {
	string language;
public:
	ConversationBook(int id, string description, string producer, int price, int ISBN, string author, string title, string language) : Book(id, description, producer, price, ISBN, author, title) {
		this->language = language;
	}
	void show() {
		cout << "--- ��ǰID : " << getId() << endl;
		cout << "��ǰ���� : " << getDesc() << endl;
		cout << "������ : " << getProd() << endl;
		cout << "���� : " << getPrice() << endl;
		cout << "ISBN : " << getISBN() << endl;
		cout << "å��� : " << getTitle() << endl;
		cout << "���� : " << getAuth() << endl;
		cout << "��� : " << language << endl;
	}
};

int main() {
	int n = 0;
	int id = 0, price, ISBN;
	string desc, prod, auth, title, sing, lang;
	Product* p[100];
	cout << "***** ��ǰ ���� ���α׷��� �۵��մϴ�. *****" << endl;
	while (n != 3) {
		cout << "��ǰ �߰�(1), ��� ��ǰ ��ȸ(2), ������(3) ? ";
		cin >> n;
		if (n == 1 && id < 100) {
			int a;
			cout << "��ǰ ���� å(1), ����CD(2), ȸȭå(3) ? ";
			cin >> a;
			cin.ignore(1);
			if (a == 1) {
				cout << "��ǰ����>>"; getline(cin, desc);
				cout << "������>>"; getline(cin, prod);
				cout << "����>>"; cin >> price;
				cin.ignore(1);
				cout << "å����>>"; getline(cin, title);
				cout << "����>>"; getline(cin, auth);
				cout << "ISBN>>"; cin >> ISBN;
				Book* a = new Book(id, desc, prod, price, ISBN, auth, title);
				p[id] = a;
				id++;
			}
			else if (a == 2) {
				cout << "��ǰ����>>"; getline(cin, desc);
				cout << "������>>"; getline(cin, prod);
				cout << "����>>"; cin >> price;
				cin.ignore(1);
				cout << "�ٹ�����>>"; getline(cin, title);
				cout << "����>>"; getline(cin, sing);
				CompactDisc* a = new CompactDisc(id, desc, prod, price, title, sing);
				p[id] = a;
				id++;
			}
			else if (a == 3) {
				cout << "��ǰ����>>"; getline(cin, desc);
				cout << "������>>"; getline(cin, prod);
				cout << "����>>"; cin >> price;
				cin.ignore(1);
				cout << "å����>>"; getline(cin, title);
				cout << "����>>"; getline(cin, auth);
				cout << "���>>"; getline(cin, lang);
				cout << "ISBN>>"; cin >> ISBN;
				ConversationBook* a = new ConversationBook(id, desc, prod, price, ISBN, auth, title, lang);
				p[id] = a;
				id++;
			}
		}
		else if (n == 2) {
			for (int k = 0; k < id; k++) {
				p[k]->show();
			}
		}
		cout << endl;
	}
}