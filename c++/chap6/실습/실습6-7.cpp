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
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) {
		int a = Random::nextInt(1, 100);
		cout << a << ' ';
	}
	cout << endl;
	cout << "���ĺ��� �����ϰ� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) {
		char a = Random::nextAlphabet();
		cout << a << ' ';
	}
	cout << endl;
	cout << "������ �Ǽ��� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) {
		double a = Random::nextDouble();
		cout << a << ' ';
		if (i == 4) cout << endl;
	}
}