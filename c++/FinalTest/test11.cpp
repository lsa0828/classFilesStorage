#include <iostream>
#include <string>
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
	NamedCircle(int radius = 0, string name = "") : Circle(radius) {
		this->name = name;
	}
	string getName() { return name; }
};

int main() {
	int r;
	string n;
	NamedCircle big;
	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> r; getline(cin, n);
		NamedCircle a(r, n);
		if (big.getArea() < a.getArea())
			big = a;
	}
	cout << "���� ������ ū ���ڴ� " << big.getName() << "�Դϴ�" << endl;
}