#include <iostream>
using namespace std;

class Person {
	string name;
public:
	Person() { name = ""; }
	Person(string name) { this->name = name; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class Family {
	Person* p;
	string name;
	int size;
public:
	Family(string name, int size);
	void setName(int i, string name);
	void show();
	~Family();
};

Family::Family(string name, int size) {
	this->size = size;
	p = new Person[size];
	this->name = name;
}

void Family::setName(int i, string name) {
	p[i].setName(name);
}

void Family::show() {
	cout << name << "가족은 다음과 같이 " << size << "명 입니다." << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << '\t';
	}
}

Family::~Family() {
	delete[] p;
}

int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}