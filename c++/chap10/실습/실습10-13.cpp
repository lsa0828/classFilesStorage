#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, int> m;
	cout << "***** �������� ���α׷� HIGH SCORE�� �����մϴ�. *****" << endl;
	int ans, score;
	string name;
	while (true) {
		cout << "�Է�:1, ��ȸ:2, ����:3 >> ";
		cin >> ans;
		if (ans == 1) {
			cout << "�̸��� ����>> ";
			cin >> name >> score;
			m[name] = score;
		}
		else if (ans == 2) {
			cout << "�̸�>> ";
			cin >> name;
			cout << name << "�� ������ " << m[name] << endl;
		}
		else if (ans == 3) {
			cout << "���α׷��� �����մϴ�...";
			break;
		}
	}
}