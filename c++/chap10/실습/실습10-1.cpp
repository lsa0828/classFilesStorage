#include <iostream>
using namespace std;

template <class T>
T biggest(T x[], int n) {
	T big = x[0];
	for (int i = 0; i < n; i++)
		if (big < x[i]) big = x[i];
	return big;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;

	char y[] = { 'a','e','b','r','h' };
	cout << biggest(y, 5) << endl;
}