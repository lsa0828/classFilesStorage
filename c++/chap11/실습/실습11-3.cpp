#include <iostream>
using namespace std;

int main() {
	char ch[100];
	while (true) {
		cin.ignore(100, ';');
		cin.get(ch, 100);
		if (cin.eof()) break;
		cout << ch << endl;
	}
}