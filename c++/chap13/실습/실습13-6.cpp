#include <iostream>
using namespace std;

int* concat(int a[], int sizea, int b[], int sizeb) throw(int) {
	if (a == NULL || b == NULL) throw -1;
	if (sizea <= 0 || sizeb <= 0) throw -2;
	int* s = new int[sizea + sizeb];
	if (s == NULL) throw - 3;
	for (int i = 0; i < sizea; i++)
		s[i] = a[i];
	for (int i = 0; i < sizeb; i++)
		s[i + sizea] = b[i];
	return s;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	int y[] = { 10,20,30,40 };
	try {
		int* p = concat(x, 5, y, 4);
		for (int n = 0; n < 9; n++) cout << p[n] << ' ';
		cout << endl;
		delete[] p;
	}
	catch (int failCode) {
		cout << "���� �ڵ� : " << failCode << endl;
	}
}