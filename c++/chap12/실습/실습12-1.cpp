#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("C:\\Temp\\test.txt");
	if (!fin) {
		cout << "열기 실패";
		return 0;
	}
	
	char a[20];
	char b[20];
	fin >> a;
	fin >> b;
	cout << a << endl << b << endl;

	fin.close();
}