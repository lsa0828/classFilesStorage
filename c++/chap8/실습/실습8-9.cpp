#include <iostream>
#include <string>
using namespace std;

class Console {
public:
	static int menu() {
		int m;
		cout << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
		cin >> m;
		return m;
	}
	static int Rmenu() {
		int t;
		cout << "07시:1, 12시:2, 17시:3>> ";
		cin >> t;
		return t;
	}
};

class Seat {
	string time;
	string name;
	int num;
	bool reservation;
public:
	Seat() {
		name = "---";
		reservation = false;
	}
	void setTime(string time) {
		this->time = time;
	}
	void reserve(int num) {
		this->num = num;
		cout << "이름 입력>> ";
		cin >> name;
		reservation = true;
	}
	void cancel() {
		string s;
		cout << "이름 입력>> ";
		cin >> s;
		if (s == name) {
			name = "---";
			reservation = false;
		}
	}
	string getTime() { return time; }
	void show() {
		cout << name;
	}
};

class Schedule {
	Seat* s;
public:
	Schedule() {
		s = new Seat[8];
	}
	void setTime(string time) {
		for (int i = 0; i < 8; i++) {
			s[i].setTime(time);
		}
	}
	string getTime() {
		return s[0].getTime();
	}
	void reserve() {
		int num;
		cout << "좌석 번호>> ";
		cin >> num;
		s[num - 1].reserve(num - 1);
	}
	void cancel() {
		int num;
		cout << "좌석 번호>> ";
		cin >> num;
		s[num - 1].cancel();
	}
	void show() {
		cout << s[0].getTime() << ":";
		for (int i = 0; i < 8; i++) {
			cout << '\t';
			s[i].show();
		}
		cout << endl;
	}
};

class AirlineBook {
	Schedule* plane;
public:
	AirlineBook() {
		plane = new Schedule[3];
		setTime("07시", "12시", "17시");
	}
	void setTime(string t1, string t2, string t3) {
		plane[0].setTime(t1);
		plane[1].setTime(t2);
		plane[2].setTime(t3);
	}
	void reserve(int i) {
		plane[i].show();
		plane[i].reserve();
	}
	void cancel(int i) {
		plane[i].show();
		plane[i].cancel();
	}
	void show() {
		for (int i = 0; i < 3; i++)
			plane[i].show();
	}
	void run() {
		while (true) {
			int p, a = Console::menu();
			if (a == 1) {
				p = Console::Rmenu();
				reserve(p - 1);
			}
			else if (a == 2) {
				p = Console::Rmenu();
				cancel(p - 1);
			}
			else if (a == 3) {
				show();
			}
			else if (a == 4) {
				break;
			}
			cout << endl;
		}
		cout << "예약 시스템을 종료합니다." << endl << "-------------------------------";
	}
};

int main() {
	cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl << endl;
	AirlineBook* plane = new AirlineBook;
	plane->run();
}