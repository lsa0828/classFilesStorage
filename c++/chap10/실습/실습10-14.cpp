#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, string> m;
	string name, pass;
	int ans;
	cout << "***** ��ȣ ���� ���α׷� WHO�� �����մϴ� *****" << endl;
	while (true) {
		cout << "����:1, �˻�:2, ����:3>> ";
		cin >> ans;
		if (ans == 1) {
			cout << "�̸� ��ȣ>> ";
			cin >> name >> pass;
			m[name] = pass;
		}
		else if (ans == 2) {
			cout << "�̸�? ";
			cin >> name;
			while(true) {
				cout << "��ȣ? ";
				cin >> pass;
				if (m[name] == pass) {
					cout << "���!!" << endl;
					break;
				}
				else
					cout << "����~~" << endl;
			} 
		}
		else if (ans == 3) {
			cout << "���α׷��� �����մϴ�...";
			break;
		}
	}
}