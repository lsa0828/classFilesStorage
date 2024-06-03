#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}


int main() {
	Circle* c = new Circle[3];
	int r;
	for (int i = 0; i < 3; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		c[i].setRadius(r);
	}
	int a = 0;
	for (int i = 0; i < 3; i++) {
		if (c[i].getArea() > 100) a += 1;
	}
	cout << "������ 100���� ū ���� " << a << "�� �Դϴ�";
}