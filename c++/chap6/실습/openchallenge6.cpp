#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Person {
	string name;
public:
	void setName(string n) { name = n; }
	string getName() { return name; }
};

class UpAndDownGame {
	static Person p[2];
	static int answer;
	static int first;
	static int last;
	static bool finish;
public:
	UpAndDownGame() {
		string a, b;
		cout << "�������� �̸� >> ";
		cin >> a >> b;
		p[0].setName(a); p[1].setName(b);
		cout << "Up & Down ������ �����մϴ�." << endl;
		srand((unsigned)time(0));
		answerInt();
		situation();
		gamestart();
	}
	static void answerInt();
	static void gamestart();
	static void situation();
	static void run(Person p);
};

Person UpAndDownGame::p[2];
int UpAndDownGame::answer;
int UpAndDownGame::first = 0;
int UpAndDownGame::last = 99;
bool UpAndDownGame::finish = false;

void UpAndDownGame::answerInt() {
	answer = rand();
	answer = answer % 100;
}
void UpAndDownGame::gamestart() {
	while (finish==false) {
		for (int i = 0; i < 2; i++) {
			cout << p[i].getName() << ">>";
			run(p[i]);
			if (finish == true) break;
		}
	}
}
void UpAndDownGame::situation() {
	cout << "���� " << first << "�� " << last << "���̿� �ֽ��ϴ�." << endl;
}
void UpAndDownGame::run(Person p) {
	int n;
	cin >> n;
	if (answer == n) {
		cout << p.getName() << "�� �̰���ϴ�!!" << endl;
		finish = true;
	}
	else {
		if (answer > n) first = n;
		else last = n;
		situation();
	}
}

int main() {
	UpAndDownGame a;
}