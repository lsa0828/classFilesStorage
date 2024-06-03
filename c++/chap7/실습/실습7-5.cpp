#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
	/*
	Color operator + (Color a) {
		red += a.red;
		green += a.green;
		blue += a.blue;
		return *this;
	}
	bool operator == (Color a) {
		if ((red == a.red) && (green == a.green) && (blue = a.blue)) return true;
		else return false;
	}*/
	friend Color operator + (Color a, Color b);
	friend bool operator == (Color a, Color b);
};

Color operator + (Color a, Color b) {
	a.red += b.red;
	a.green += b.green;
	a.blue += b.blue;
	return a;
}
bool operator == (Color a, Color b) {
	if ((a.red == b.red) && (a.green == b.green) && (a.blue = b.blue)) return true;
	else return false;
}

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "����� ����";
	else
		cout << "����� �ƴ�";
}