#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	const char* src = "C:\\Temp\\Words\\basicDay9.txt";

	ifstream fin(src, ios::in);

	if (!fin) {
		cout << "열기 실패";
		return 0;
	}

	vector<string> v;
	string s;
	while (!fin.eof()) {
		getline(fin, s);
		v.push_back(s);
	}

	srand((unsigned int)time(0));

	int r, n = v.size();
	int a = 0;
	while (true) {
		r = rand() % n;
		if (v[r] != "") {
			cout << ++a << ". " << v[r] << endl;
			v[r] = "";
		}
		else if(a == n) break;
	}

	fin.close();
}