#include <iostream>

using namespace std;

int main() {
	char s[100];
	int n = 0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	cin.getline(s, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (s[i] == 'x') n += 1;
	}
	cout << "x�� ������ " << n;
}