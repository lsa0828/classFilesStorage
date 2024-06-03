#include <iostream>

using namespace std;

int main() {
	double a, b, c, d, e;
	cout << "5개의 실수를 입력하라>>";
	cin >> a >> b >> c >> d >> e;
	if (a > b && a > c && a > d && a > e) {
		cout << "제일 큰 수 = " << a;
	}
	else if (b > a && b > c && b > d && b > e) {
		cout << "제일 큰 수 = " << b;
	}
	else if (c > a && c > b && c > d && c > e) {
		cout << "제일 큰 수 = " << c;
	}
	else if (d > a && d > b && d > c && d > e) {
		cout << "제일 큰 수 = " << d;
	}
	else {
		cout << "제일 큰 수 = " << e;
	}
}