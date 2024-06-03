#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char s[100];
	while(true) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(s, 100, '\n');
		if (strcmp(s, "yes") == 0) break;
	}
	cout << "종료합니다...";
}