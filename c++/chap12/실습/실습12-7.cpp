#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* srcFile = "C:\\windows\\system.ini";
	const char* destFile = "C:\\Temp\\system.txt";

	ifstream fin(srcFile, ios::in | ios::binary);
	ofstream fout(destFile, ios::out | ios::binary);

	if (!fin || !fout) {
		cout << "열기 실패";
		return 0;
	}

	fin.seekg(0, ios::end);
	int n = fin.tellg();
	for (int i = 1; i <= n; i++) {
		fin.seekg(-i, ios::end);
		int c = fin.get();
		fout.put(c);
	}
	
	fin.close();
	fout.close();
}