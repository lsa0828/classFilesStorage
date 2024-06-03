#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	const char* src = "C:\\Temp\\Words\\basicDay1.txt";
	const char* src2 = "C:\\Temp\\Words\\basicDay2.txt";
	const char* src3 = "C:\\Temp\\Words\\basicDay3.txt";

	ifstream fin(src, ios::in);
	ifstream fin2(src2, ios::in);
	ifstream fin3(src3, ios::in);

	vector<string> v;
	string s;
	while (!fin.eof()) {
		getline(fin, s);
		v.push_back(s);
	}
	while (!fin2.eof()) {
		getline(fin2, s);
		v.push_back(s);
	}
	while (!fin3.eof()) {
		getline(fin3, s);
		v.push_back(s);
	}

	srand((unsigned int)time(0));

	int r, n = v.size();
	int a = 0;
	while (a < 82) {
		r = rand() % n;
		if (v[r] != "") {
			cout << ++a << ". " << v[r] << endl;
			v[r] = "";
		}
	}

	fin.close();
	fin2.close();
	fin3.close();
}