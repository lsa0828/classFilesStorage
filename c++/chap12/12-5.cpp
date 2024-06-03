#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("C:\\Temp\\data.txt");
	if (!fin) {
		cout << "C:\\Temp\\data.txt 열기 실패" << endl;
		return 0;
	}

	char buf[81];
	while (fin.getline(buf, 81)) {
		cout << buf << endl;
	}

	fin.close();
}