#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class Musicbox {
	string singer, song;
public:
	Musicbox(string singer = "", string song = "") {
		this->singer = singer; this->song = song;
	}
	string getSong() { return song; }
	string getSinger() { return singer; }
};

int main() {
	srand((unsigned)time);
	vector<Musicbox> v;
	v.push_back(Musicbox("이문세", "행복한 사람"));
	v.push_back(Musicbox("김수철", "못다핀 꽃 한송이"));
	v.push_back(Musicbox("나미", "슬픈 인연"));
	v.push_back(Musicbox("윤시내", "열애"));
	v.push_back(Musicbox("양희은", "아침이슬"));
	v.push_back(Musicbox("전영록", "종이학"));
	v.push_back(Musicbox("박정운", "오늘같은 밤이면"));
	v.push_back(Musicbox("구창모", "희나리"));
	cout << "***** 가수 노래 맞추기 게임을 시작합니다. *****" << endl;
	while (true) {
		int n;
		cout << "정보 입력: 1, 퀴즈: 2, 종료: 3 >> ";
		cin >> n;
		if (n == 1) {
			cout << "현재 " << v.size() << "개의 노래가 입력되어 있습니다." << endl;
			cout << "가수와 노래를 입력하세요(no no 이면 입력끝)" << endl;
			while (true) {
				string singer, song;
				int size = v.size();
				cout << ++size << ">>";
				cin >> singer; getline(cin, song);
				if (singer == "no" && song == "no") {
					break;
				}
				v.push_back(Musicbox(singer, song));
			}
		}
		else if (n == 2) {
			while (true) {
				string singer;
				int quiz = rand() & v.size();
				cout << v[quiz].getSong() << "의 가수는?";
				getline(cin, singer);
				if (singer == "exit") break;
				if (singer == v[quiz].getSinger())
					cout << "Correct!!" << endl;
				else cout << "No!!" << endl;
			}
		}
		else if (n == 3) {
			break;
		}
	}
}