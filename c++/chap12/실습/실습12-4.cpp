#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream fin("C:\\windows\\system.ini");
	ofstream fout("C:\\Temp\\system.txt");
	if (!fin || !fout) {
		cout << "열기 실패";
		return 0;
	}
	string line;
	while (getline(fin, line)) {
		for (int i = 0; i < line.length(); i++) {
			fout << (char)toupper(line[i]);
		}
		fout << endl;
	}
	fin.close();
	fout.close();
}