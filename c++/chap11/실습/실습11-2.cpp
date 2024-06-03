#include <iostream>
using namespace std;

int main() {
	char ch;
	int a = 0;
	while (true) {
		cin.get(ch);
		if (cin.eof()) break;
		if (ch == ' ') a += 1;
		if (ch == '\n') break;
	}
	cout << "ºóÄ­ÀÇ °³¼ö : " << a;
}