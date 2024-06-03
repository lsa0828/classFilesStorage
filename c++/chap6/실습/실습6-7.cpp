#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767) {
		int a = rand() % (max - min + 1) + min;
		return a;
	}
	static char nextAlphabet() {
		char a = 'A' + rand() % 26;
		return a;
	}
	static double nextDouble() {
		double a = (double)rand() / RAND_MAX;
		return a;
	}
};

int main() {
	Random::seed();
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		int a = Random::nextInt(1, 100);
		cout << a << ' ';
	}
	cout << endl;
	cout << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		char a = Random::nextAlphabet();
		cout << a << ' ';
	}
	cout << endl;
	cout << "랜덤한 실수를 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		double a = Random::nextDouble();
		cout << a << ' ';
		if (i == 4) cout << endl;
	}
}