#include <iostream>
#include <fstream>
using namespace std;

int getFileSize(const char* file) {
	if (file == NULL) throw "파일명이 NULL 입니다.";
	ifstream fin(file);
	if (!fin) throw "파일 열기 실패";
	fin.seekg(0, ios::end);
	int length = fin.tellg();
	return length;
}

int main() {
	try {
		int n = getFileSize("C:\\windows\\system.ini");
		cout << "파일 크기 = " << n << endl;
		int m = getFileSize(NULL);
		cout << "파일 크기 = " << m << endl;
	}
	catch (const char* s) {
		cout << "예외 발생 : " << s << endl;
	}
}