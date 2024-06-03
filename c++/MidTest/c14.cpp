#include <iostream>
using namespace std;

int add(int a[], int n, int b[]=NULL) {
	int sum = 0;
	if (b == NULL) {
		for (int i = 0; i < n; i++) {
			sum += a[i];
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			sum = sum + a[i] + b[i];
		}
	}
	return sum;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}