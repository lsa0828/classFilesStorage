#include <iostream>
using namespace std;

int main() {
	int ch, a = 0;
	while ((ch = cin.get()) != EOF) {
		if (ch == 'a')
			a += 1;
		if (ch == '\n')
			break;
	}
	cout << "aÀÇ °³¼ö : " << a;
}