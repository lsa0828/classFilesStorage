#include <iostream>
using namespace std;

class Stack {
	int* n;
	int top;
public:
	Stack() { n = new int; top = -1; }
	Stack& operator << (int a) {
		n[++top] = a;
		return *this;
	}
	Stack& operator >> (int& a) {
		a = n[top--];
		return *this;
	}
	bool operator ! () {
		if (top==-1) return true;
		else return false;
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}