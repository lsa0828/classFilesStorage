#include <iostream>
#include <string>
using namespace std;

#include <cstdlib>
#include <ctime>

int main() {
	string s;
	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, s);
		if (s == "exit") break;
		srand((unsigned)time(0));
		int n = rand() % s.length();
		int a = rand() % 25 + 95;
		s[n] = (char)a;
		cout << s << endl;
	}
}