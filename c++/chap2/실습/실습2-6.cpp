#include <iostream>
#include <string>

using namespace std;

int main() {
	string a, b;
	cout << "새 암호를 입력하세요>>";
	cin >> a;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> b;
	if (a == b) cout << "같습니다";
	else cout << "같지 않습니다";
}