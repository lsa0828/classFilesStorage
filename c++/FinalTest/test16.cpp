#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	const char* file = "C:\\windows\\system.ini";
	ifstream fin(file);
	if (!fin) {
		"���� ����";
		return 0;
	}

	vector<string> v;
	string line;
	while (getline(fin, line)) {
		v.push_back(line);
	}
	cout << file << " ���� �б� �Ϸ�" << endl;
	cout << "���� ��ȣ�� �Է��ϼ���. 1���� ���� ���� �Է��ϸ� ����" << endl;
	while (true) {
		int n;
		cout << ": ";
		cin >> n;
		if (n < 1) break;
		if (n <= v.size())
			cout << v[n - 1] << endl;
	}
	cout << "�����մϴ�." << endl;
	fin.close();
}