#include <iostream>
using namespace std;

int main() {
	string a;
	cout << "문자열 입력>>";
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j <= i; j++) {
			cout << a[j];
		}
		cout << endl;
	}
}