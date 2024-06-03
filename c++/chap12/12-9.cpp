#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* srcFile = "C:\\Temp\\puzzle.jpg";
	const char* destFile = "C:\\Temp\\copypuzzle.jpg";

	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) {
		cout << srcFile << " ���� ����" << endl;
		return 0;
	}
	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) {
		cout << destFile << " ���� ����" << endl;
		return 0;
	}

	char buf[1024];
	while (!fsrc.eof()) {
		fsrc.read(buf, 1024);
		int n = fsrc.gcount();
		fdest.write(buf, n);
	}
	cout << srcFile << "�� " << destFile << "�� ���� �Ϸ�" << endl;
	fsrc.close();
	fdest.close();
}