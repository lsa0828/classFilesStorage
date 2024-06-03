#include <iostream>
using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	void setMem(int i, char c) { mem[i] = c; }
	char getMem(int i) { return mem[i]; }
};

class ROM : BaseMemory {
public:
	ROM(int size, char x[], int n) : BaseMemory(size) {
		for (int i = 0; i < n; i++) setMem(i, x[i]);
	}
	char read(int i) {
		return getMem(i);
	}
};

class RAM : BaseMemory {
public:
	RAM(int size) : BaseMemory(size) { ; }
	void write(int i, char c) {
		setMem(i, c);
	}
	char read(int i) {
		return getMem(i);
	}
};

int main() {
	char x[5] = { 'h','e','l','l','o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
}