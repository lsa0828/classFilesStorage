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
	n.setNation("한국", "서울");
	v.push_back(n);
	n.setNation("미국", "와싱턴");
	v.push_back(n);
	n.setNation("독일", "베를린");
	v.push_back(n);
	n.setNation("중국", "베이징");
	v.push_back(n);
	n.setNation("프랑스", "파리");
	v.push_back(n);
	n.setNation("일본", "도쿄");
	v.push_back(n);
	n.setNation("이집트", "카이로");
	v.push_back(n);
	n.setNation("러시아", "모스크바");
	v.push_back(n);
	n.setNation("브라질", "브라질리아");
	v.push_back(n);

	srand((unsigned)time(0));
	cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;
	while (true) {
		int ans;
		cout << "정보 입력: 1, 퀴즈: 2, 종료: 3 >> ";
		cin >> ans;
		if (ans == 1) {
			cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;
			cout << "나라와 수도를 입력하세요(no no 이면 입력끝)" << endl;
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
				cout << v.at(n).getN() << "의 수도는?";
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