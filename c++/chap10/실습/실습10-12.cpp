#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Word {
	string eng;
	string kor;
public:
	void setWord(string e, string k) {
		eng = e; kor = k;
	}
	string getE() { return eng; }
	string getK() { return kor; }
};

int main() {
	vector<Word> v;
	Word w;
	w.setWord("human", "인간");
	v.push_back(w);
	w.setWord("baby", "아기");
	v.push_back(w);
	w.setWord("love", "사랑");
	v.push_back(w);
	w.setWord("society", "사회");
	v.push_back(w);
	w.setWord("emotion", "감정");
	v.push_back(w);
	w.setWord("painting", "그림");
	v.push_back(w);
	w.setWord("bear", "곰");
	v.push_back(w);
	w.setWord("dall", "인형");
	v.push_back(w);
	w.setWord("trade", "거래");
	v.push_back(w);
	w.setWord("picture", "사진");
	v.push_back(w);

	srand((unsigned)time(0));
	int a;
	cout << "영어 어휘 테스트를 시작합니다. 1~4 외 다른 입력시 종료합니다." << endl;
	while (true) {
		cout << "어휘 삽입: 1, 어휘 테스트: 2, 프로그램 종료:그외키 >> ";
		cin >> a;
		if (a == 1) {
			cout << "영어 단어에 exit을 입력하면 입력 끝" << endl;
			string e, k;
			while (true) {
				cout << "영어 >> ";
				cin >> e;
				if (e == "exit") break;
				cout << "한글 >> ";
				cin >> k;
				w.setWord(e, k);
				v.push_back(w);
			}
		}
		else if (a == 2) {
			int k[4], size;
			while (true) {
				k[0] = rand() % v.size();
				cout << v[k[0]].getE() << '?' << endl;
				size = 1;
				int a = 0;
				while (size < 4) {
					int n = rand() % v.size();
					for (int i = 0; i < size; i++) {
						if (k[i] == n) a = 1;
					}
					if (a == 0) k[size++] = n;
					a = 0;
				}
				int ans, i = 0;
				while (i < 4) {
					int n = rand() % 4;
					if (k[n] != -1) {
						i++;
						cout << "(" << i << ") " << v[k[n]].getK() << ' ';
						if (n == 0) ans = i;
					}
					k[n] = -1;
				}
				cout << ":>";
				int answer;
				cin >> answer;
				if (answer == -1) break;
				if (answer == ans) cout << "Excellent !!" << endl;
				else cout << "No. !!" << endl;
			}
		}
		else break;
	}
}