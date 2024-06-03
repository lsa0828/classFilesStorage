#include <iostream>
#include <fstream>
using namespace std;

int getFileSize(const char* file) {
	if (file == NULL) throw "���ϸ��� NULL �Դϴ�.";
	ifstream fin(file);
	if (!fin) throw "���� ���� ����";
	fin.seekg(0, ios::end);
	int length = fin.tellg();
	return length;
}

int main() {
	try {
		int n = getFileSize("C:\\windows\\system.ini");
		cout << "���� ũ�� = " << n << endl;
		int m = getFileSize(NULL);
		cout << "���� ũ�� = " << m << endl;
	}
	catch (const char* s) {
		cout << "���� �߻� : " << s << endl;
	}
}