#include <iostream>

using namespace std;

int main() {
	int max = 0;
	char s[100];
	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";
	for (int i = 0; i < 5; i++) {
		int n;
		char name[100];
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << endl;
		for (n = 0; n < 100; n++) {
			if (name[n] == '\0') break;
		}
		if (max < n) {
			max = n;
			for (int k = 0; k < 100; k++) {
				s[k] = name[k];
				if (name[k] == '\0') break;
			}
		}
	}
	cout << "���� �� �̸��� " << s;
}