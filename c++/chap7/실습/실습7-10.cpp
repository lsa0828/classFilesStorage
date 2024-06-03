#include <iostream>
using namespace std;

class Statistics {
	int* n;
	int size;
public:
	Statistics() { n = new int; size = 0; n[0] = 0; }
	bool operator ! () {
		if (n[0] == 0) return true;
		return false;
	}
	Statistics& operator << (int a) {
		n[size] = a;
		size += 1;
		return *this;
	}
	void operator >> (int& avg) {
		int a = 0;
		for (int i = 0; i < size; i++) a += n[i];
		avg = a / size;
	}
	void operator ~ () {
		for (int i = 0; i < size; i++) cout << n[i] << ' ';
		cout << endl;
	}
};

int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이타가 없습니다." << endl;

	int x[5];
	cout << "5 개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;
}