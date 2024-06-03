#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class IntStack : public AbstractStack {
	int* stack;
	int top;
public:
	IntStack() { stack = new int; top = -1; }
	virtual bool push(int n) {
		if (top == MAX_SIZE) return false;
		else {
			top++;
			stack[top] = n;
			return true;
		}
	}
	virtual bool pop(int& n) {
		if (top == -1) return false;
		else {
			n = stack[top];
			top--;
			return true;
		}
	}
	virtual int size() {
		return top + 1;
	}
};

int main() {
	IntStack stack;
	stack.push(2);
	stack.push(3);
	stack.push(4);

	int n;
	stack.pop(n);

	cout << "팝한 정수: " << n << endl;
	cout << "현재 크기는 " << stack.size() << endl;
}