#include <iostream>
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
using namespace std;

int main() {
	int a, b;
	char c;
	for (; ; ) {
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		cin >> a >> b >> c;
		if (c == '+') {
			Add m;
			m.setValue(a, b);
			cout << m.calculate() << endl;
		}
		else if (c == '-') {
			Sub m;
			m.setValue(a, b);
			cout << m.calculate() << endl;
		}
		else if (c == '*') {
			Mul m;
			m.setValue(a, b);
			cout << m.calculate() << endl;
		}
		else if (c == '/') {
			Div m;
			m.setValue(a, b);
			cout << m.calculate() << endl;
		}
		else break;
	}
}