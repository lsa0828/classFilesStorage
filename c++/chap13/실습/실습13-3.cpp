#include <iostream>
using namespace std;

int get() throw(char*) {
	int n;
	cout << "0~9 사이의 정수 입력 >> ";
	cin >> n;
	if (n < 0 || n>9) throw "input fault 예외 발생, 계산할 수 없음";
	return n;
}

int main() {
	while (true) {
		try {
			int a = get();
			int b = get();
			cout << a << "x" << b << "=" << a * b << endl;
		}
		catch (const char* s) {
			cout << s << endl;
		}
	}
}