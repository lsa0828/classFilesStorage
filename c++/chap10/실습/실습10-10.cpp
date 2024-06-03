#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Nation {
	string nation;
	string capital;
public:
	void setNation(string n, string c) {
		nation = n; capital = c;
	}
	string getN() { return nation; }
	string getC() { return capital; }
};

int main() {
	vector<Nation> v; Nation n;
	n.setNation("�ѱ�", "����");
	v.push_back(n);
	n.setNation("�̱�", "�ͽ���");
	v.push_back(n);
	n.setNation("����", "������");
	v.push_back(n);
	n.setNation("�߱�", "����¡");
	v.push_back(n);
	n.setNation("������", "�ĸ�");
	v.push_back(n);
	n.setNation("�Ϻ�", "����");
	v.push_back(n);
	n.setNation("����Ʈ", "ī�̷�");
	v.push_back(n);
	n.setNation("���þ�", "��ũ��");
	v.push_back(n);
	n.setNation("�����", "���������");
	v.push_back(n);

	srand((unsigned)time(0));
	cout << "***** ������ ���� ���߱� ������ �����մϴ�. *****" << endl;
	while (true) {
		int ans;
		cout << "���� �Է�: 1, ����: 2, ����: 3 >> ";
		cin >> ans;
		if (ans == 1) {
			cout << "���� " << v.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�." << endl;
			cout << "����� ������ �Է��ϼ���(no no �̸� �Է³�)" << endl;
			while (true) {
				string nat, cap;
				cout << v.size() + 1 << ">>";
				cin >> nat >> cap;
				if (nat == "no" && cap == "no") break;
				int a = 0;
				for (int i = 0; i < v.size(); i++) {
					if (v.at(i).getN() == nat || v.at(i).getC() == cap) {
						cout << "already exists !!" << endl;
						a = 1;
					}
				}
				if (a == 0) {
					n.setNation(nat, cap);
					v.push_back(n);
				}
			}
		}
		else if (ans == 2) {
			while (true) {
				string cap;
				int n = rand() % v.size();
				cout << v.at(n).getN() << "�� ������?";
				cin >> cap;
				if (cap == "exit") break;
				if (v.at(n).getC() == cap) cout << "Correct !!" << endl;
				else cout << "NO !!" << endl;
			}
		}
		else if (ans == 3) {
			break;
		}
	}
}