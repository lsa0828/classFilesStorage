#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	const char* file = "C:\\Temp\\words.txt";
	ifstream fin(file);

	if (!fin) {
		cout << "열기 실패";
		return 0;
	}

	srand((unsigned)time(0));
	vector<string> v;
	string line;
	while (getline(fin, line)) {
		for (int i = 0; i < line.length(); i++) {
			line[i] = tolower(line[i]);
		}
		v.push_back(line);
	}
	cout << "----------------------------------" << endl;
	cout << "지금부터 행맨 게임을 시작합니다." << endl;
	cout << "----------------------------------" << endl;
	char a, b, ans;
	string quest;
	while (true) {
		quest = "";
		int n = rand() % 25143;
		string word = v[n];
		int size = word.length();
		int alpha = rand() % size;
		a = word[alpha];
		for (; a == word[alpha]; ) {
			alpha = rand() % size;
		}
		b = word[alpha];
		for (int i = 0; i < size; i++) {
			if (word[i] != a && word[i] != b) {
				quest += word[i];
			}
			else quest += '-';
		}
		for (int i = 0; i < 5; i++) {
			cout << quest << endl;
			cout << ">>";
			cin >> ans;
			if (ans == a) {
				for (int i = 0; i < size; i++) {
					if (word[i] == a)
						quest[i] = a;
				}
			}
			else if (ans == b) {
				for (int i = 0; i < size; i++) {
					if (word[i] == b)
						quest[i] = b;
				}
			}
			if (quest == word) {
				cout << quest << endl;
				break;
			}
			if (quest != word && i == 4) {
				cout << "5번 실패 하였습니다." << endl;
				cout << word << endl;
				break;
			}
		}
		char yn;
		cout << "Next(y/n)?";
		cin >> yn;
		if (yn == 'n') break;
	}

	fin.close();
}