#include <iostream>
using namespace std;

template <class T>
void reverseArray(T* x, int n) {
	for (int i = 0; i < int(n / 2); i++) {
		int a = x[i];
		x[i] = x[n - 1 - i];
		x[n - 1 - i] = a;
	}
}

int main() {
	int x[] = { 1,10,100,5,4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';
}