#include <iostream>
using namespace std;
#include "Ram.h"

Ram::Ram() {
	mem[100 * 1024] = 0;
}

Ram::~Ram() {
	cout << "�޸� ���ŵ�" << endl;
}

char Ram::read(int address) {
	return mem[address];
}

void Ram::write(int address, char value) {
	mem[address] = value;
}