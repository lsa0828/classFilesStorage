#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
	string name;
public:
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class GamblingGame {
	Player* p;
public:
	GamblingGame() { p = new Player[2]; }
	void start();
	void run();
	int game();
};

void GamblingGame::start() {
	string name;
	cout << "ù��° ���� �̸�>>";
	getline(cin, name);
	p[0].setName(name);
	cout << "�ι�° ���� �̸�>>";
	getline(cin, name);
	p[1].setName(name);
}

void GamblingGame::run() {
	int a = 0;
	while (a==0) {
		for (int i = 0; i < 2; i++) {
			cout << p[i].getName() << ":<Enter>";
			if (cin.get() == '\n') {
				int n = game();
				if (n == 1) {
					cout << p[i].getName() << "�� �¸�!!" << endl;
					a = 1;
					break;
				}
				else if (n == 0) cout << "�ƽ�����!" << endl;
			}
		}
	}
}

int GamblingGame::game() {
	srand((unsigned)time(0));
	int a = rand() % 3, b = rand() % 3, c = rand() % 3;
	cout << "\t\t" << a << '\t' << b << '\t' << c << '\t';
	if (a == b && b == c) return 1;
	else return 0;
}

int main() {
	cout << "***** ���� ������ �����մϴ�. *****" << endl;
	GamblingGame g;
	g.start();
	g.run();
}