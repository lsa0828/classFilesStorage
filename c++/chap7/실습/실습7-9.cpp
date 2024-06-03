#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r; }
	void show() { cout << "radius = " << radius << " ÀÎ ¿ø" << endl; }
	friend Circle operator + (int a, Circle b) {
		Circle c(a + b.radius);
		return c;
	}
};

int main() {
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}