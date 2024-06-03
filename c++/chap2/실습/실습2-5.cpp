#include <iostream>

using namespace std;

int main() {
	char s[100];
	int n = 0;
	cout << "문자들을 입력하라(100개 미만)." << endl;
	cin.getline(s, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (s[i] == 'x') n += 1;
	}
	cout << "x의 개수는 " << n;
}