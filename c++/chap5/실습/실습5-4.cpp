#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a > b) {
		big = a;
		return false;
	}
	else if (a < b) {
		big = b;
		return false;
	}
	else return true;
}

int main() {
	int big;
	bool a = bigger(5, 10, big);
	if (a == true) cout << "°°´Ù";
	else cout << big;
}