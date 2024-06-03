#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	const char* file = "C:\\windows\\system.ini";
	ifstream fin(file);

	if (!fin) {
		cout << "���� ����";
		return 0;
	}

	vector<string> fileV;
	string line;
	int count = 0;
	while (getline(fin, line)) {
		fileV.push_back(line);
		count++;
	}
	cout << file << " ���� �б� �Ϸ�" << endl;
	cout << "���� ��ȣ�� �Է��ϼ���. 1���� ���� ���� �Է��ϸ� ����" << endl;
	int n;
	while (true) {
		cout << ": ";
		cin >> n;
		if (n < 1) break;
		if (n <= fileV.size())
			cout << fileV.at(n - 1) << endl;
	}
	cout << "�����մϴ�.";

	fin.close();
}