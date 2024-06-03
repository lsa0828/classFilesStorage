#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	const char* file = "C:\\windows\\system.ini";
	ifstream fin(file);

	if (!fin) {
		cout << "열기 실패";
		return 0;
	}

	vector<string> fileV;
	string line;
	int count = 0;
	while (getline(fin, line)) {
		fileV.push_back(line);
		count++;
	}
	cout << file << " 파일 읽기 완료" << endl;
	cout << "라인 번호를 입력하세요. 1보다 작은 값을 입력하면 종료" << endl;
	int n;
	while (true) {
		cout << ": ";
		cin >> n;
		if (n < 1) break;
		if (n <= fileV.size())
			cout << fileV.at(n - 1) << endl;
	}
	cout << "종료합니다.";

	fin.close();
}