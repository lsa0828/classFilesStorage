#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char name[10], dept[20];
	int sid;

	cout << "이름>>";
	cin >> name;
	cout << "학번>>";
	cin >> sid;
	cout << "학과>>";
	cin >> dept;

	ofstream fout("C:\\Temp\\data.txt");
	if (!fout) {
		cout << "C:\\Temp\\data.txt 파일을 열수 없다";
		return 0;
	}

	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;

	fout.close();
}