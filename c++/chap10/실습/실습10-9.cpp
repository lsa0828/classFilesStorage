#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int n;
	while (true) {
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
		cin >> n;
		if (n == 0) break;
		v.push_back(n);
		int sum = 0;
		for (int i = 0; i < v.size(); i++) {
			cout << v.at(i) << ' ';
			sum += v.at(i);
		}
		cout << endl << "��� = " << (double)sum / v.size() << endl;
	}
}