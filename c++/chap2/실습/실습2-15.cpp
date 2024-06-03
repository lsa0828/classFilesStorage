#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char math[20], m[2];
	int a, b;
	while (true) {
		cout << "? ";
		for (int i = 0; i < 3; i++) {
			cin.getline(math, 20, ' ');
			if (i == 0) {
				a = atoi(math);
			}
			else if (i == 1) {
				for (int j = 0; j < 2; j++) {
					m[j] = math[j];
				}
			}
			else if (i == 2) {
				b = atoi(math);
			}
		}
		cout << a << " " << m << " " << b << " = ";
		if (strcmp(m, "+") == 0) cout << a + b << endl;
		else if (strcmp(m, "-") == 0) cout << a - b << endl;
		else if (strcmp(m, "*") == 0) cout << a * b << endl;
		else if (strcmp(m, "/") == 0) cout << a / b << endl;
		else if (strcmp(m, "%") == 0) cout << a % b << endl;
	}
}