#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, int> m;
	cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다. *****" << endl;
	int ans, score;
	string name;
	while (true) {
		cout << "입력:1, 조회:2, 종료:3 >> ";
		cin >> ans;
		if (ans == 1) {
			cout << "이름과 점수>> ";
			cin >> name >> score;
			m[name] = score;
		}
		else if (ans == 2) {
			cout << "이름>> ";
			cin >> name;
			cout << name << "의 점수는 " << m[name] << endl;
		}
		else if (ans == 3) {
			cout << "프로그램을 종료합니다...";
			break;
		}
	}
}