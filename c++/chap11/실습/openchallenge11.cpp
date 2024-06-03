#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class AbstractPlayer {
	string name;
protected:
	static string gbb[3];
public:
	AbstractPlayer(string name) {
		this->name = name;
		gbb[0] = "����"; gbb[1] = "����"; gbb[2] = "��";
	}
	virtual string turn() = 0;
	string getName() { return name; }
};
string AbstractPlayer::gbb[3] = { "","","" };

class Human : public AbstractPlayer {
public:
	Human(string name) : AbstractPlayer(name) { }
	virtual string turn() {
		string g;
		do {
			cout << getName() << ">>";
			cin >> g;
		} while (g != "����" && g != "����" && g != "��");
		return g;
	}
};

class Computer : public AbstractPlayer {
public:
	Computer(string name) : AbstractPlayer(name) { }
	virtual string turn() {
		int n = rand() % 3;
		cout << getName() << ": " << gbb[n] << endl;
		return gbb[n];
	}
};

int main() {
	srand((unsigned)time(0));
	string name;
	cout << "***** ��ǻ�Ϳ� ����� ���� ���� �� ����� ��Ĩ�ϴ�. *****" << endl;
	cout << "���� �̸��� �Է��ϼ���>>";
	cin >> name;
	Human h(name);
	Computer c("Computer");
	while (true) {
		string hturn = h.turn();
		string cturn = c.turn();
		if ((hturn == "����" && cturn == "��") || (hturn == "����" && cturn == "����") || (hturn == "��" && cturn == "����")) {
			cout << h.getName() << " is winner." << endl;
		}
		else if ((cturn == "����" && hturn == "��") || (cturn == "����" && hturn == "����") || (cturn == "��" && hturn == "����")) {
			cout << c.getName() << " is winner." << endl;
		}
		else
			cout << "the same" << endl;
	}
}