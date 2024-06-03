#include <iostream>
using namespace std;

template <class T>
bool equalArrays(T x[], T y[], int n) {
	for (int i = 0; i < n; i++) {
		if (x[i] != y[i]) return false;
	}
	return true;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };
	if (equalArrays(x, y, 5)) cout << "같다" << endl;
	else cout << "다르다" << endl;

	int z[] = { 1,10,100,4,5 };
	if (equalArrays(x, z, 5)) cout << "같다" << endl;
	else cout << "다르다" << endl;

	double a[] = { 1.1,10.2,100.3,5.4,4.5 };
	double b[] = { 1.1,10.2,100.3,5.4,4.5 };
	if (equalArrays(a, b, 5)) cout << "같다" << endl;
	else cout << "다르다" << endl;

	int c[] = { 'E','q','u','a','l' };
	int d[] = { 'E','q','u','a','l' };
	if (equalArrays(c, d, 5)) cout << "같다" << endl;
	else cout << "다르다" << endl;
}