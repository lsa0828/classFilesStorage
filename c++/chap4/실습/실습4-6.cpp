#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�" << endl;
	string s;
	while (true) {
		cout << ">>";
		getline(cin, s);
		if (s == "exit") break;
		for (int i = s.length() - 1; i >= 0; i--) {
			cout << s[i];
		}
		cout << endl;
	}
}