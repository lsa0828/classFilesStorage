#include <iostream>
#include <string>

using namespace std;

int main() {
	char s[20];
	cout << "문자열 입력>>";
	cin >> s;
	for (int i = 0; i < strlen(s); i++) {
		for (int j = 0; j <= i; j++) {
			cout << s[j];
			
		}
		cout << endl;
	}
}