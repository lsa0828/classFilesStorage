#include <iostream>
#include <fstream>
using namespace std;

bool FileCompare(ifstream& fin1, ifstream& fin2) {
	int a, b;
	while ((a = fin1.get()) != EOF && (b = fin2.get()) != EOF) {
		if (a != b) return false;
	}
	return true;
}

int main() {
	const char* file1 = "C:\\Temp\\data.txt";
	const char* file2 = "C:\\Temp\\data1.txt";

	ifstream fin1(file1, ios::binary);
	ifstream fin2(file2, ios::binary);

	if (!fin1 || !fin2) {
		cout << "���� ����";
		return 0;
	}

	if (FileCompare(fin1, fin2)) cout << "�� ������ ����";
	else cout << "�� ������ �ٸ�";

	fin1.close();
	fin2.close();
}