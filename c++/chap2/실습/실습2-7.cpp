#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char s[100];
	while(true) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(s, 100, '\n');
		if (strcmp(s, "yes") == 0) break;
	}
	cout << "�����մϴ�...";
}