#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class Musicbox {
	string singer, song;
public:
	Musicbox(string singer = "", string song = "") {
		this->singer = singer; this->song = song;
	}
	string getSong() { return song; }
	string getSinger() { return singer; }
};

int main() {
	srand((unsigned)time);
	vector<Musicbox> v;
	v.push_back(Musicbox("�̹���", "�ູ�� ���"));
	v.push_back(Musicbox("���ö", "������ �� �Ѽ���"));
	v.push_back(Musicbox("����", "���� �ο�"));
	v.push_back(Musicbox("���ó�", "����"));
	v.push_back(Musicbox("������", "��ħ�̽�"));
	v.push_back(Musicbox("������", "������"));
	v.push_back(Musicbox("������", "���ð��� ���̸�"));
	v.push_back(Musicbox("��â��", "�񳪸�"));
	cout << "***** ���� �뷡 ���߱� ������ �����մϴ�. *****" << endl;
	while (true) {
		int n;
		cout << "���� �Է�: 1, ����: 2, ����: 3 >> ";
		cin >> n;
		if (n == 1) {
			cout << "���� " << v.size() << "���� �뷡�� �ԷµǾ� �ֽ��ϴ�." << endl;
			cout << "������ �뷡�� �Է��ϼ���(no no �̸� �Է³�)" << endl;
			while (true) {
				string singer, song;
				int size = v.size();
				cout << ++size << ">>";
				cin >> singer; getline(cin, song);
				if (singer == "no" && song == "no") {
					break;
				}
				v.push_back(Musicbox(singer, song));
			}
		}
		else if (n == 2) {
			while (true) {
				string singer;
				int quiz = rand() & v.size();
				cout << v[quiz].getSong() << "�� ������?";
				getline(cin, singer);
				if (singer == "exit") break;
				if (singer == v[quiz].getSinger())
					cout << "Correct!!" << endl;
				else cout << "No!!" << endl;
			}
		}
		else if (n == 3) {
			break;
		}
	}
}