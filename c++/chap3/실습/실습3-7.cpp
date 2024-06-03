#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>

class SelectableRandom {
public:
	SelectableRandom();
	int next();
	int nextInRange(int a, int b);
	int evennext();
	int evennextInRange(int a, int b);
};

SelectableRandom::SelectableRandom() {
	srand((unsigned)time(0));
}

int SelectableRandom::next() {
	int n = rand();
	if (n % 2 == 1)
		return n;
	else
		next();
}

int SelectableRandom::nextInRange(int a, int b) {
	int n = rand() % (b - a + 1) + a;
	if (n % 2 == 1)
		return n;
	else
		nextInRange(a, b);
}

int SelectableRandom::evennext() {
	int n = rand();
	if (n % 2 == 0)
		return n;
	else
		evennext();
}

int SelectableRandom::evennextInRange(int a, int b) {
	int n = rand() % (b - a + 1) + a;
	if (n % 2 == 0)
		return n;
	else
		evennextInRange(a, b);
}

int main() {
	SelectableRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.evennext();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}