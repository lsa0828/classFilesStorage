#include <iostream>
using namespace std;

int sum(int a, int b) throw(char*) {
	if (a > b) throw "�߸��� �Է�";
	char minus[] = "���� ó�� �� ��";
	if (a < 0 || b < 0) throw minus;
	int s = 0;
	for (int i = a; i <= b; i++) {
		s += i;
	}
	return s;
}

int main() {
	try {
		cout << sum(2, 5) << endl;
		cout << sum(-1, 5) << endl;
	}
	catch (char* s) {
		cout << s << endl;
	}
}