#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n = 0;
	for (int i = 0; i < 128; i++) {
		if (n > 0 && n % 10 == 0) cout << endl;
		if (isprint(i)) {
			cout << left << setw(5) << (char)i;
		}
		else cout << left << setw(5) << '.';
		n++;
	}
}