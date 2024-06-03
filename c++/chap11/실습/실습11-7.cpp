#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
	cout.setf(ios::left);
	for (int i = 0; i < 4; i++) {
		cout << setw(7) << "dec";
		cout << setw(7) << "hexa";
		cout << setw(7) << "char";
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		cout << setw(7) << "---";
		cout << setw(7) << "----";
		cout << setw(7) << "----";
	}
	cout << endl;
	for (int i = 0; i <= 100; i += 4) {
		for (int j = i; j < i + 4; j++) {
			cout << setw(7) << dec << j;
			cout << setw(7) << hex << j;
			if (isprint(j))
				cout << setw(7) << (char)j;
			else cout << setw(7) << '.';
		}
		cout << endl;
	}
}