#include <iostream>
#include <string>
using namespace std;

class Integer {
	int num;
public:
	Integer(int a) { num = a; }
	Integer(string a) { num = stoi(a); }
	int get() { return num; }
	void set(int a) { num = a; }
	int isEven() {
		if (num % 2 == 0) return 1;
		else return 0;
	}
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}