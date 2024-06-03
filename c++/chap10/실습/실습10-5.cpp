#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T* n = new T[sizea + sizeb];
	for (int i = 0; i < sizea; i++)
		n[i] = a[i];
	for (int i = 0; i < sizeb; i++)
		n[i + sizea] = b[i];
	return n;
}

int main() {
	int x[] = { 1,100,4,5 };
	int y[] = { 5,6,7,2 };
	int* n = concat(x, 4, y, 4);
	for (int i = 0; i < 8; i++)
		cout << n[i] << ' ';
}