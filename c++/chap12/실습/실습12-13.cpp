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
	cout << "�˻��� �����մϴ�. �ܾ �Է��� �ּ���." << endl;
	string word;
	bool find;
	while (true) {
		find = false;
		cout << "�ܾ�>> ";
		cin >> word;
		if (word == "exit") break;
		for (int i = 0; i < v.size(); i++) {
			int n = v[i].find(word);
			if (n == 0) {
				cout << v[i] << endl;
				find = true;
			}
		}
		if (!find) cout << "�߰��� �� ����" << endl;
	}

	fin.close();
}