#include <iostream>
using namespace std;
#include "Ram.h"

int main() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 20);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102������ �� = " << (int)ram.read(102) << endl;
}