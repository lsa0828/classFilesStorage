#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class GameObject {
protected:
	int distance;
	int x, y;
public:
	GameObject(int startX, int startY, int distance) {
		this->x = startX; this->y = startY;
		this->distance = distance;
	}
	virtual ~GameObject() {};

	virtual void move() = 0;
	virtual char getShape() = 0;

	int getX() { return x; }
	int getY() { return y; }
	bool collide(GameObject* p) {
		if (this->x == p->getX() && this->y == p->getY())
			return true;
		else
			return false;
	}
};

class Human : public GameObject {
public:
	Human(int x, int y, int d) : GameObject(x, y, d) { }
	virtual void move() {
		int orgX = x; int orgY = y;
		while (true) {
			char m;
			cin >> m;
			if (m == 'a') x = x - distance;
			else if (m == 's') y = y + distance;
			else if (m == 'd') y = y - distance;
			else if (m == 'f') x = x + distance;
			if (x >= 0 && x <= 19 && y >= 0 && y <= 9) {
				break;
			}
			x = orgX; y = orgY;
			cout << "다른 방향으로 치세요 >> ";
		}
	}
	virtual char getShape() {
		return 'H';
	}
};

class Monster : public GameObject {
public:
	Monster(int x, int y, int d) : GameObject(x, y, d) { }
	virtual void move() {
		int orgX = x; int orgY = y;
		srand((unsigned)time(0));
		while (true) {
			int m = rand() % 4;
			if (m == 0) x = x - distance;
			else if (m == 1) y = y + distance;
			else if (m == 2) y = y - distance;
			else if (m == 3) x = x + distance;
			if (x >= 0 && x <= 19 && y >= 0 && y <= 9) {
				break;
			}
			x = orgX; y = orgY;
		}
	}
	virtual char getShape() {
		return 'M';
	}
};

class Food : public GameObject {
public:
	Food(int x, int y, int d) : GameObject(x, y, d) { }
	virtual void move() {
		int orgX = x; int orgY = y;
		srand((unsigned)time(0));
		while (true) {
			int m = rand() % 4;
			if (m == 0) x = x - distance;
			else if (m == 1) y = y + distance;
			else if (m == 2) y = y - distance;
			else if (m == 3) x = x + distance;
			if (x >= 0 && x <= 19 && y >= 0 && y <= 9) {
				break;
			}
			x = orgX; y = orgY;
		}
	}
	virtual char getShape() {
		return '@';
	}
};

class Game {
public:
	Game() {
		cout << "** Human의 Food 먹기 게임을 시작합니다. **" << endl << endl;
	}
	bool show(Human* human, Monster* mon, Food* food) {
		for (int y = 0; y < 10; y++) {
			for (int x = 0; x < 20; x++) {
				if (human->getX() == x && human->getY() == y) {
					if (!(mon->collide(human))) {
						cout << human->getShape();
					}
				}
				else if (mon->getX() == x && mon->getY() == y) {
					cout << mon->getShape();
				}
				else if (food->getX() == x && food->getY() == y) {
					if (!(human->collide(food)) && !(mon->collide(food))) {
						cout << food->getShape();
					}
				}
				else cout << '-';
			}
			cout << endl;
		}
		if (winner(human, mon, food)) return true;
		else return false;
	}
	void run(Human* human, Monster* mon, Food* food) {
		show(human, mon, food);
		int n, i = 0, a = 0;
		while (true) {
			cout << "왼쪽(a), 아래(s), 위(d), 오른쪽(f) >> ";
			human->move();
			mon->move();
			srand((unsigned)time(0));
			n = rand() % 2;
			if (n == 1 && i < 2) {
				food->move();
				i += 1;
			}
			if (a < 5) {
				a += 1;
			}
			else {
				a = 0; i = 0;
			}
			if(show(human, mon, food)) break;
		}
	}
	bool winner(Human* human, Monster* mon, Food* food) {
		if (mon->collide(human) || mon->collide(food)) {
			cout << "Monster is Winner!!";
			return true;
		}
		else if (human->collide(food)) {
			cout << "Human is Winner !!";
			return true;
		}
		else return false;
	}
};

int main() {
	Human human(0, 0, 1);
	Monster mon(5, 5, 2);
	Food food(10, 9, 1);
	Game game;
	game.run(&human, &mon, &food);
}