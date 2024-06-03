#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

ostream& line(ostream& outs) {
	return outs << endl << "-------------------------------------------------------------" << endl;
}

class Person {
	string name;
	char stone;
public:
	Person(string name = "", char stone = '+') {
		this->name = name;
		this->stone = stone;
	}
	void setName(string name) {
		this->name = name;
	}
	void setStone(char stone) {
		this->stone = stone;
	}
	string getName() {
		return name;
	}
	char getStone() {
		return stone;
	}
};

class Match {
	Person p1, p2;
public:
	Match() {
		string name;
		cout << "이름(선공) >> ";
		getline(cin, name);
		p1.setName(name);
		p1.setStone('@');
		cout << "이름(후공) >> ";
		getline(cin, name);
		p2.setName(name);
		p2.setStone('O');
		cout << endl << p1.getName() << "(" << p1.getStone() << ") vs " << p2.getName() << "(" << p2.getStone() << ")" << endl << line;
	}
	Person player(int i) {
		if (i == 1) return p1;
		else return p2;
	}
};

class Board {
	char arr[19][19];
protected:
	Board() {
		for (int w = 0; w < 19; w++) {
			for (int h = 0; h < 19; h++) {
				arr[w][h] = '+';
			}
		}
	}
public:
	void show() {
		cout << setw(3) << ' ';
		for (int h = 0; h < 19; h++) {
			cout << setw(2) << h << ' ';
		}
		cout << endl;
		for (int w = 0; w < 19; w++) {
			cout << setw(2) << w << ' ';
			for (int h = 0; h < 19; h++) {
				cout << setw(2) << arr[w][h] << ' ';
			}
			cout << endl;
		}
	}
	void change(int w, int h, char stone) {
		arr[w][h] = stone;
	}
	char whatArr(int w, int h) {
		return arr[w][h];
	}
};

class Rule : public Board {
public:
	bool arrM(int w, int h, char s) {
		if (whatArr(w, h) == s) {
			if (whatArr(w, h + 1) == s) {
				if (whatArr(w, h + 2) == s) {
					if (whatArr(w, h + 3) == s) {
						if (whatArr(w, h + 4) == s)
							return true;
					}
				}
			}
		}
		return false;
	}
	bool arrL(int w, int h, char s) {
		if (whatArr(w, h) == s) {
			if (whatArr(w + 1, h) == s) {
				if (whatArr(w + 2, h) == s) {
					if (whatArr(w + 3, h) == s) {
						if (whatArr(w + 4, h) == s)
							return true;
					}
				}
			}
		}
		return false;
	}
	bool arrS(int w, int h, char s) {
		if (whatArr(w, h) == s) {
			if (whatArr(w + 1, h - 1) == s) {
				if (whatArr(w + 2, h - 2) == s) {
					if (whatArr(w + 3, h - 3) == s) {
						if (whatArr(w + 4, h - 4) == s)
							return true;
					}
				}
			}
		}
		return false;
	}
	bool arrR(int w, int h, char s) {
		if (whatArr(w, h) == s) {
			if (whatArr(w + 1, h + 1) == s) {
				if (whatArr(w + 2, h + 2) == s) {
					if (whatArr(w + 3, h + 3) == s) {
						if (whatArr(w + 4, h + 4) == s)
							return true;
					}
				}
			}
		}
		return false;
	}
};

class ComplexRule : public Rule {
public:
	bool successM(char s) {
		for (int w = 0; w < 19; w++) {
			for (int h = 0; h < 15; h++) {
				if (h == 0) {
					if (arrM(w, h, s) && whatArr(w, h + 5) != s)
						return true;
				}
				else if (h == 14) {
					if (arrM(w, h, s) && whatArr(w, h - 1) != s)
						return true;
				}
				else {
					if (arrM(w, h, s) && whatArr(w, h - 1) != s && whatArr(w, h + 5) != s)
						return true;
				}
			}
		}
		return false;
	}
	bool successL(char s) {
		for (int h = 0; h < 19; h++) {
			for (int w = 0; w < 15; w++) {
				if (w == 0) {
					if (arrL(w, h, s) && whatArr(w + 5, h) != s)
						return true;
				}
				else if (w == 14) {
					if (arrL(w, h, s) && whatArr(w - 1, h) != s)
						return true;
				}
				else if (arrL(w, h, s) && whatArr(w + 5, h) != s && whatArr(w - 1, h) != s)
					return true;
			}
		}
		return false;
	}
	bool successS(char s) {
		int n = 0;
		for (int w = 0; w < 15; w++) {
			for (int h = 4; h < 19; h++) {
				if (arrS(w, h, s)) {
					if (w != 14 && h != 4) {
						if (whatArr(w + 5, h - 5) != s)
							n++;
					}
					else n++;
					if (w != 0 && h != 18) {
						if (whatArr(w - 1, h + 1) != s)
							n++;
					}
					else n++;
					if (n == 2) return true;
					else n = 0;
				}
			}
		}
		return false;
	}
	bool successR(char s) {
		int n = 0;
		for (int w = 0; w < 15; w++) {
			for (int h = 0; h < 15; h++) {
				if (arrR(w, h, s)) {
					if (w != 0 && h != 0) {
						if (whatArr(w - 1, h - 1) != s)
							n++;
					}
					else n++;
					if (w != 14 && h != 14) {
						if (whatArr(w + 5, h + 5) != s)
							n++;
					}
					else n++;
					if (n == 2)return true;
					else n = 0;
				}
			}
		}
		return false;
	}
};

class Baduk : public ComplexRule {
	Match m;
protected:
	void go(Person p) {
		show();
		while (true) {
			int w, h;
			cout << p.getName() << "(" << p.getStone() << ") (행, 열) >> ";
			cin >> w >> h;
			if (whatArr(w, h) == '+' && (w >= 0 && w < 19) && (h >= 0 && h < 19)) {
				change(w, h, p.getStone());
				cout << line;
				break;
			}
			else cout << "(다시 입력하세요)";
		}
	}
	bool success(char s) {
		if (successM(s)) return true;
		if (successL(s)) return true;
		if (successS(s)) return true;
		if (successR(s)) return true;
		return false;
	}
public:
	void run() {
		int b = 0;
		while (b == 0) {
			for (int i = 1; i < 3; i++) {
				go(m.player(i));
				if (success(m.player(i).getStone())) {
					show();
					cout << m.player(i).getName() << "의 승리!!" << endl;
					b = 1;
					break;
				}
			}
		}
	}
};

int main() {
	cout << "오목 게임을 시작합니다" << endl;
	Baduk game;
	game.run();
}