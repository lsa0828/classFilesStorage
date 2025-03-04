#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&');
	cin.ignore(); // & 뒤에 따라오는 <Enter>키를 제거하기 위한 코드
	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n');
	cout << "replace: ";
	getline(cin, r, '\n');

	int startIndex = 0;
	while (true) {
		int fIndex = s.find(f, startIndex);
		if (fIndex == -1) break;
		s.replace(fIndex, f.length(), r);
		startIndex = fIndex + r.length();
	}
	cout << s << endl;
}