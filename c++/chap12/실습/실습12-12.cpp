#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
	const char* file = "C:\\Temp\\words.txt";
	ifstream fin(file);

	if (!fin) {
		cout << "���� ����";
		return 0;
	}

	vector<string> v;
	string line;
	while (getline(fin, line)) {
		v.push_back(line);
	}
	cout << "... " << file << " ���� �ε� �Ϸ�" << endl;
	cout << "�˻��� �����մϴ�. �ܾ �Է��� �ּ���" << endl;
	string word;
	int cnt = 0;
	while (true) {
		cout << "�ܾ�>> ";
		cin >> word;
		if (word == "exit") break;
		for (int i = 0; i < v.size(); i++) {
			if (word.length() == v[i].length()) {
				for (int j = 0; j < word.length(); j++) {
					if (word[j] == v[i][j]) {
						cnt++;
					}
				}
				if (cnt == word.length() - 1) {
					cout << v[i] << endl;
				}
				cnt = 0;
			}
		}
	}

	fin.close();
}