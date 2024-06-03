#include <iostream>
using namespace std;

class Matrix {
	int n[4];
public:
	Matrix() { for (int i = 0; i < 4; i++) n[i] = 0; }
	Matrix(int a, int b, int c, int d) {
		n[0] = a; n[1] = b; n[2] = c; n[3] = d;
	}
	void show() {
		cout << "Matrix = { " << n[0] << ' ' << n[1] << ' ' << n[2] << ' ' << n[3] << " }" << endl;
	}/*
	void operator >> (int a[]) {
		for (int i = 0; i < 4; i++)
			a[i] = n[i];
	}
	void operator << (int a[]) {
		for (int i = 0; i < 4; i++)
			n[i] = a[i];
	}*/
	friend void operator >> (Matrix a, int b[]);
	friend void operator << (Matrix& a, int b[]);
};

void operator >> (Matrix a, int b[]) {
	for (int i = 0; i < 4; i++)
		b[i] = a.n[i];
}
void operator << (Matrix& a, int b[]) {
	for (int i = 0; i < 4; i++)
		a.n[i] = b[i];
}

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}