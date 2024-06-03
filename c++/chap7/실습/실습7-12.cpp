#include <iostream>
using namespace std;

class SortedArray {
	int size;
	int* p;
	void sort() {
		for (int i = 0; i < size-1; i++) {
			for (int j = i + 1; j < size; j++) {
				if (p[i] > p[j]) {
					int a = p[i];
					p[i] = p[j];
					p[j] = a;
				}
			}
		}
	}
public:
	SortedArray() { p = NULL; size = 0; }
	SortedArray(SortedArray& src) {
		size = src.size;
		p = new int[size];
		for (int i = 0; i < size; i++) {
			p[i] = src.p[i];
		}
		sort();
	}
	SortedArray(int p[], int size) {
		this->size = size;
		this->p = new int[size];
		for (int i = 0; i < size; i++) {
			this->p[i] = p[i];
		}
		sort();
	}
	~SortedArray() { if(p) delete[] p; }
	SortedArray operator + (SortedArray& op2) {
		SortedArray a;
		a.size = size + op2.size;
		a.p = new int[a.size];
		for (int i = 0; i < a.size; i++) {
			if (i < size)
				a.p[i] = p[i];
			else
				a.p[i] = op2.p[i - size];
		}
		return a;
	}
	SortedArray& operator = (const SortedArray& op2) {
		if(p) delete[] p;
		size = op2.size;
		p = new int[size];
		for (int i = 0; i < size; i++) {
			p[i] = op2.p[i];
		}
		return *this;
	}
	void show() {
		cout << "배열 출력 : ";
		for (int i = 0; i < size; i++) {
			cout << p[i] << ' ';
		}
		cout << endl;
	}
};

int main() {
	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;

	a.show();
	b.show();
	c.show();
}