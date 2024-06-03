#include <iostream>

using namespace std;

int main() {
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = i * 10 + 1; j <= i * 10 + 10; j++) {
			cout << j << "\t";
		}
		cout << "\n";
	}
}