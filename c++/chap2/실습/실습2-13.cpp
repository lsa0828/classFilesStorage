#include <iostream>

using namespace std;

int main() {
	int n, menu = 0;
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;
	while (true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		cin >> menu;
		if (menu == 4) {
			cout << "���� ������ �������ϴ�.";
			break;
		}
		else if ((menu != 1) && (menu != 2) && (menu != 3)) {
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
		}
		else {
			cout << "���κ�?";
			cin >> n;
			if (menu == 1)
				cout << "«�� " << n << "�κ� ���Խ��ϴ�" << endl;
			else if (menu == 2)
				cout << "¥�� " << n << "�κ� ���Խ��ϴ�" << endl;
			else if (menu == 3)
				cout << "������ " << n << "�κ� ���Խ��ϴ�" << endl;
		}
	}
}