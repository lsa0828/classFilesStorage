#include <iostream>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack() { size = 10; p = new int[size]; tos = -1; }
	MyIntStack(int size) { this->size = size; p = new int[size]; tos = -1; }
	MyIntStack(const MyIntStack& s) { this->size = s.size; p = new int[size]; this->tos = s.tos; }
	~MyIntStack() { delete[] p; }
	bool push(int n) {
		if (tos < size - 1) {
			p[++tos] = n;
			return true;
		}
		else return false;
	}
	bool pop(int& n) {
		if (tos > -1) {
			n = p[tos--];
			return true;
		}
		return false;
	}
};

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}