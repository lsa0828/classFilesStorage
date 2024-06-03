#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream fin("C:\\windows\\system.ini");
	if(!fin) {
		cout << "열기 실패";
		return 0;
	}
	string line;
	int i = 0;
	while (getline(fin, line)) {
		cout << ++i << " : " << line << endl;
	}
	fin.close();
}