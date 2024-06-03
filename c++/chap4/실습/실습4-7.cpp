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
	Circle* c = new Circle[3];
	int r, a = 0;
	for (int i = 0; i < 3; i++) {
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> r;
		c[i].setRadius(r);
		if (c[i].getArea() > 100)a += 1;
	}
	cout << "면적이 100보다 큰 원은 " << a << "개 입니다" << endl;
}