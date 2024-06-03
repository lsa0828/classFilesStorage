#include <iostream>
#include <string>
using namespace std;

#include <cstdlib>
#include <ctime>

int main() {
	string s;
	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, s);
		if (s == "exit") break;
		srand((unsigned)time(0));
		int n = rand() % s.length();
		int a = rand() % 25 + 95;
		s[n] = (char)a;
		cout << s << endl;
	}
}