#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	cout << "���ڿ� �Է�>> ";
	getline(cin, text, '\n');
	int a = 0;
	for (int i = 0; i < text.length(); i++) {
		if ('a' == text[i]) a += 1;
	}
	cout << "���� a�� " << a << "�� �ֽ��ϴ�." << endl;
}