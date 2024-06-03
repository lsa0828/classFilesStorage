#include <iostream>
using namespace std;

const double PI = 3.141592;

class Circle {
	int radius;
public:
	Circle() { radius = 0; }
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return radius * radius * PI;
}

int main() {
	int num;
	cout << "���� ���� >> ";
	cin >> num;
	Circle* c = new Circle[num];
	int r, a = 0;
	for (int i = 0; i < num; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		c[i].setRadius(r);
		if (c[i].getArea() > 100) a += 1;
	}
	cout << "������ 100���� ū ���� " << a << "�� �Դϴ�" << endl;
}