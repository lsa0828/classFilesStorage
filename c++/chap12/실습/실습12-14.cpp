#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "C:\\windows\\system.ini";
	ifstream fin(file, ios::binary);

	if (!fin) {
		cout << "���� ����";
		return 0;
	}

	char s[1024];
	int n = 0;
	while (!fin.eof()) {
		fin.read(s, 1024);
		n = fin.gcount();
	}
	cout << "������ ũ��� " << n;

	fin.close();
}