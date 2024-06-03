#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void show() { cout << radius << endl; }
};

void swap(Circle& a, Circle& b) {
	Circle tmp = a;
	a = b;
	b = tmp;
}

int main() {
	Circle a, b(5);
	swap(a, b);
	a.show();
	b.show();
}