#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream fin("C:\\windows\\system.ini");
	if (!fin) {
		cout << "열기 실패";
		return 0;
	}
	string line;
	while (getline(fin, line)) {
		for (int i = 0; i < line.length(); i++) {
			cout << (char)toupper(line[i]);
		}
		cout << endl;
	}
	fin.close();
}