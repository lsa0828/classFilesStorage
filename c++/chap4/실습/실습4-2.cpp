#include <iostream>
using namespace std;

int main() {
	int* n = new int[5];
	cout << "정수 5개 입력>> ";
	cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += n[i];
	}
	float av = sum / 5.0;
	cout << "평균 " << av << endl;
}