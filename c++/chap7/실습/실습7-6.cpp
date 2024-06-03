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
	}
	/*
	Matrix operator + (Matrix a) {
		Matrix b;
		for (int i = 0; i < 4; i++) b.n[i] = n[i] + a.n[i];
		return b;
	}
	void operator += (Matrix a) {
		for (int i = 0; i < 4; i++) n[i] += a.n[i];
	}
	bool operator == (Matrix a) {
		for (int i = 0; i < 4; i++)
			if (n[i] != a.n[i]) return false;
		return true;
	}*/
	friend Matrix operator + (Matrix a, Matrix b);
	friend void operator += (Matrix& a, Matrix b);
	friend bool operator == (Matrix a, Matrix b);
};

Matrix operator + (Matrix a, Matrix b) {
	Matrix c;
	for (int i = 0; i < 4; i++) c.n[i] = a.n[i] + b.n[i];
	return c;
}
void operator += (Matrix& a, Matrix b) {
	for (int i = 0; i < 4; i++) a.n[i] += b.n[i];
}
bool operator == (Matrix a, Matrix b) {
	for (int i = 0; i < 4; i++)
		if (a.n[i] != b.n[i]) return false;
	return true;
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}