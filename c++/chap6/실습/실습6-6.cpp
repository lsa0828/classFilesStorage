#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size) {
		int* a = new int[size*2];
		for (int i = 0; i < size; i++) {
			a[i] = s1[i];
		}
		for (int i = 0; i < size; i++) {
			a[i + size] = s2[i];
		}
		return a;
	}
	static int* remove(int s1[], int s2[], int size, int& retSize) {
		int* a = new int[size];
		int n = 0;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (s1[i] == s2[j]) {
					n = 1; break;
				}
			}
			if (n == 0) {
				a[retSize] = s1[i];
				retSize += 1;
			}
			else n = 0;
		}
		return a;
	}
};

int main() {
	int x[5];
	cout << "정수 5개를 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	int y[5];
	cout << "정수 5개를 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}

	cout << "합친 정수 배열을 출력한다" << endl;
	int* a=ArrayUtility2::concat(x, y, 5);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;

	int r = 0;
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. ";
	int* b=ArrayUtility2::remove(x, y, 5, r);
	cout << "개수는 " << r << endl;
	for (int i = 0; i < r; i++) {
		cout << b[i] << ' ';
	}
	cout << endl;
}