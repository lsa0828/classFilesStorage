#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("C:\\Temp\\C++12.cpp");
	if (!fin) {
		cout << "열기 실패";
		return 0;
	}
	int c;
	bool slash = false;
	while ((c = fin.get()) != EOF) {
		if (c == '/') {
			if (!slash)
				slash = true;
			else {
				fin.ignore(100, '\n');
				cout << endl;
				slash = false;
			}
		}
		else {
			if (slash) {
				cout << '/' << (char)c;
				slash = false;
			}
			else cout << (char)c;
		}
	}
	fin.close();
}