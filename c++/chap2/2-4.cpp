#include <iostream>

using namespace std;

int main() {
	cout << " 이름>>";

	char name[11];
	cin >> name;

	cout << "이름은 " << name << '\n';
	cout << name[2];
}