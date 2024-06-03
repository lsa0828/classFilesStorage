#include <iostream>
using namespace std;

int* copy(int* src, int size) {
	int* p = NULL;
	if (size < 0) throw - 1;
	if (size > 100) throw - 2;
	p = new int[size];
	if (p == NULL) throw - 3;
	if (src == NULL) throw - 4;
	for (int n = 0; n < size; n++) p[n] = src[n];
	return p;
}

int main() {
	try {
		int x[] = { 1,2,3 };
		int* p = copy(x, 3);
		for (int i = 0; i < 3; i++)
			cout << p[i] << ' ';
		cout << endl;
		delete[] p;
	}
	catch (int e) {
		cout << "오류 코드 : " << e << endl;
	}
}