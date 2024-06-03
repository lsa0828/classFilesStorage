#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	const char* file = "C:\\windows\\system.ini";
	ifstream fin(file);
	if (!fin) {
		"열기 실패";
		return 0;
	}

	vector<string> v;
	string line;
	while (getline(fin, line)) {
		v.push_back(line);
	}
	cout << file << " 파일 읽기 완료" << endl;
	cout << "라인 번호를 입력하세요. 1보다 작은 값을 입력하면 종료" << endl;
	while (true) {
		int n;
		cout << ": ";
		cin >> n;
		if (n < 1) break;
		if (n <= v.size())
			cout << v[n - 1] << endl;
	}
	cout << "종료합니다." << endl;
	fin.close();
}