#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* srcFile = "C:\\windows\\system.ini";
	const char* destFile = "C:\\Temp\\system.txt";
	
	ifstream fin(srcFile, ios::in);
	ofstream fout(destFile, ios::out);

	if (!fin || !fout) {
		cout << "열기 실패";
		return 0;
	}
	
	cout << "복사 시작..." << endl;
	fin.seekg(0, ios::end);
	int n = fin.tellg();
	fin.seekg(0, ios::beg);
	int a = 0;
	int b = 0;
	int c;
	while ((c = fin.get()) != EOF) {
		if (a == n / 10) {
			b += 10;
			cout << "." << n / 10 << "B " << b << "%" << endl;
			a = 0;
		}
		fout.put((char)c);
		a++;
	}
	cout << n << "B 복사 완료";

	fin.close();
	fout.close();
}