#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	while (true) {
		int n;
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
		cin >> n;
		if (n == 0) break;
		v.push_back(n);
		int sum = 0;
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << ' ';
			sum += v[i];
		}
		cout << endl << "��� = " << (double)(sum) / v.size() << endl;
	}
}