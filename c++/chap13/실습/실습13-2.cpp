#include <iostream>
using namespace std;

int main() {
	int grade;
	cout << "���� : ";
	try{
		cin >> grade;
		if (grade < 0 || grade >100)
			throw "�߸��� �Է�";
		if (grade < 60) cout << "F";
		else if (grade < 70)cout << "D";
		else if (grade < 80) cout << "C";
		else if (grade < 90)cout << "B";
		else if (grade <= 100)cout << "A";
	}
	catch (const char* s) {
		cout << s;
	}
}