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
	w.setWord("human", "�ΰ�");
	v.push_back(w);
	w.setWord("baby", "�Ʊ�");
	v.push_back(w);
	w.setWord("love", "���");
	v.push_back(w);
	w.setWord("society", "��ȸ");
	v.push_back(w);
	w.setWord("emotion", "����");
	v.push_back(w);
	w.setWord("painting", "�׸�");
	v.push_back(w);
	w.setWord("bear", "��");
	v.push_back(w);
	w.setWord("dall", "����");
	v.push_back(w);
	w.setWord("trade", "�ŷ�");
	v.push_back(w);
	w.setWord("picture", "����");
	v.push_back(w);

	cout << "���� ���� �׽�Ʈ�� �����մϴ�. 1~4 �� �ٸ� �Է½� �����մϴ�." << endl;
	srand((unsigned)time(0));
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
		if (answer == 0) break;
		if (answer == ans) cout << "Excellent !!" << endl;
		else cout << "No. !!" << endl;
	}
}