#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle() { ; }
	NamedCircle(int radius, string name) : Circle(radius) {
		this->name = name;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
};

int main() {
	NamedCircle pizza[5];
	int radius; string name;
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}
	NamedCircle big = pizza[0];
	for (int i = 1; i < 5; i++) {
		if (big.getArea() < pizza[i].getArea()) big = pizza[i];
	}
	cout << "���� ������ ū ���ڴ� " << big.getName() << "�Դϴ�" << endl;
}