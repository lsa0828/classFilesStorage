#include <iostream>

using namespace std;

int main() {
	double a, b, c, d, e;
	cout << "5���� �Ǽ��� �Է��϶�>>";
	cin >> a >> b >> c >> d >> e;
	if (a > b && a > c && a > d && a > e) {
		cout << "���� ū �� = " << a;
	}
	else if (b > a && b > c && b > d && b > e) {
		cout << "���� ū �� = " << b;
	}
	else if (c > a && c > b && c > d && c > e) {
		cout << "���� ū �� = " << c;
	}
	else if (d > a && d > b && d > c && d > e) {
		cout << "���� ū �� = " << d;
	}
	else {
		cout << "���� ū �� = " << e;
	}
}