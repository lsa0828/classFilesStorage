#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	cout << "문자열 입력>> ";
	getline(cin, text, '\n');
	int a = 0;
	for (int i = 0; i < text.length(); i++) {
		if ('a' == text[i]) a += 1;
	}
	cout << "문자 a는 " << a << "개 있습니다." << endl;
}