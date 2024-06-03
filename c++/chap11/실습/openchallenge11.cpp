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
		gbb[0] = "가위"; gbb[1] = "바위"; gbb[2] = "보";
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
		} while (g != "가위" && g != "바위" && g != "보");
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
	cout << "***** 컴퓨터와 사람이 가위 바위 보 대결을 펼칩니다. *****" << endl;
	cout << "선수 이름을 입력하세요>>";
	cin >> name;
	Human h(name);
	Computer c("Computer");
	while (true) {
		string hturn = h.turn();
		string cturn = c.turn();
		if ((hturn == "가위" && cturn == "보") || (hturn == "바위" && cturn == "가위") || (hturn == "보" && cturn == "바위")) {
			cout << h.getName() << " is winner." << endl;
		}
		else if ((cturn == "가위" && hturn == "보") || (cturn == "바위" && hturn == "가위") || (cturn == "보" && hturn == "바위")) {
			cout << c.getName() << " is winner." << endl;
		}
		else
			cout << "the same" << endl;
	}
}