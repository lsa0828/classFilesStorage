#include <iostream>
using namespace std;

extern "C" int get();

void mul() {
	int a = get();
	int b = get();
	cout << "���� " << a * b << "�Դϴ�." << endl;
}