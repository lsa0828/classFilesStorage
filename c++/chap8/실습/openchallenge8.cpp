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
		cout << "--- 상품ID : " << getId() << endl;
		cout << "상품설명 : " << getDesc() << endl;
		cout << "생산자 : " << getProd() << endl;
		cout << "가격 : " << getPrice() << endl;
		cout << "ISBN : " << ISBN << endl;
		cout << "책재목 : " << title << endl;
		cout << "저자 : " << author << endl;
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
		cout << "--- 상품ID : " << getId() << endl;
		cout << "상품설명 : " << getDesc() << endl;
		cout << "생산자 : " << getProd() << endl;
		cout << "가격 : " << getPrice() << endl;
		cout << "앨범제목 : " << title << endl;
		cout << "가수 : " << singer << endl;
	}
};

class ConversationBook : public Book {
	string language;
public:
	ConversationBook(int id, string description, string producer, int price, int ISBN, string author, string title, string language) : Book(id, description, producer, price, ISBN, author, title) {
		this->language = language;
	}
	void show() {
		cout << "--- 상품ID : " << getId() << endl;
		cout << "상품설명 : " << getDesc() << endl;
		cout << "생산자 : " << getProd() << endl;
		cout << "가격 : " << getPrice() << endl;
		cout << "ISBN : " << getISBN() << endl;
		cout << "책재목 : " << getTitle() << endl;
		cout << "저자 : " << getAuth() << endl;
		cout << "언어 : " << language << endl;
	}
};

int main() {
	int n = 0;
	int id = 0, price, ISBN;
	string desc, prod, auth, title, sing, lang;
	Product* p[100];
	cout << "***** 상품 관리 프로그램을 작동합니다. *****" << endl;
	while (n != 3) {
		cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ? ";
		cin >> n;
		if (n == 1 && id < 100) {
			int a;
			cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ? ";
			cin >> a;
			cin.ignore(1);
			if (a == 1) {
				cout << "상품설명>>"; getline(cin, desc);
				cout << "생산자>>"; getline(cin, prod);
				cout << "가격>>"; cin >> price;
				cin.ignore(1);
				cout << "책제목>>"; getline(cin, title);
				cout << "저자>>"; getline(cin, auth);
				cout << "ISBN>>"; cin >> ISBN;
				Book* a = new Book(id, desc, prod, price, ISBN, auth, title);
				p[id] = a;
				id++;
			}
			else if (a == 2) {
				cout << "상품설명>>"; getline(cin, desc);
				cout << "생산자>>"; getline(cin, prod);
				cout << "가격>>"; cin >> price;
				cin.ignore(1);
				cout << "앨범제목>>"; getline(cin, title);
				cout << "가수>>"; getline(cin, sing);
				CompactDisc* a = new CompactDisc(id, desc, prod, price, title, sing);
				p[id] = a;
				id++;
			}
			else if (a == 3) {
				cout << "상품설명>>"; getline(cin, desc);
				cout << "생산자>>"; getline(cin, prod);
				cout << "가격>>"; cin >> price;
				cin.ignore(1);
				cout << "책제목>>"; getline(cin, title);
				cout << "저자>>"; getline(cin, auth);
				cout << "언어>>"; getline(cin, lang);
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