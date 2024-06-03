#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	const char* file = "C:\\windows\\system.ini";
	ifstream fin(file, ios::binary);

	if (!fin) {
		cout << "열기 실패";
		return 0;
	}

	cout << file << " 출력" << endl << endl;
	fin.seekg(0, ios::end);
	int length = fin.tellg();
	fin.seekg(0, ios::beg);
	int c;
	for (int i = 0; i < length; i++) {
		c = fin.get();
		cout << setw(2) << setfill('0') << hex << c << ' ';
		if (i == length - 1) {
			int a = 15 - (i % 16);
			if (a != 0) {
				cout << setw(3 * a) << setfill(' ') << ' ';
				i += a;
			}
		}
		if (i % 16 == 15) {
			cout << "   ";
			fin.seekg(i - 15, ios::beg);
			for (int j = 0; j < 16; j++) {
				c = fin.get();
				if (c == EOF) break;
				if (isprint((int)c)) cout << (char)c << ' ';
				else cout << ". ";
				if (j == 7) cout << "   ";
			}
			cout << endl;
		}
		else if (i % 8 == 7) {
			cout << "   ";
		}
	}

	fin.close();
}