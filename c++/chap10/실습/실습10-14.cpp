#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, string> m;
	string name, pass;
	int ans;
	cout << "***** 암호 관리 프로그램 WHO를 시작합니다 *****" << endl;
	while (true) {
		cout << "삽입:1, 검사:2, 종료:3>> ";
		cin >> ans;
		if (ans == 1) {
			cout << "이름 암호>> ";
			cin >> name >> pass;
			m[name] = pass;
		}
		else if (ans == 2) {
			cout << "이름? ";
			cin >> name;
			while(true) {
				cout << "암호? ";
				cin >> pass;
				if (m[name] == pass) {
					cout << "통과!!" << endl;
					break;
				}
				else
					cout << "실패~~" << endl;
			} 
		}
		else if (ans == 3) {
			cout << "프로그램을 종료합니다...";
			break;
		}
	}
}