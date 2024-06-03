#include <iostream>
using namespace std;

int main() {
	int n;
	while (true) {
		cout << "����Է� >> ";
		try {
			cin >> n;
			if (cin.fail())
				throw "�Է� ������ �߻��Ͽ� �� �̻� �Էµ��� �ʽ��ϴ�. ���α׷��� �����մϴ�.";
			if (n < 1 || n>9)
				throw n;
			for (int i = 1; i <= 9; i++)
				cout << n << 'x' << i << '=' << n * i << ' ';
			cout << endl;
		}
		catch (int e) {
			cout << "�߸��� �Է��Դϴ�. 1~9 ������ ������ �Է��ϼ���" << endl;
		}
		catch (const char* e) {
			cout << e << endl;
			break;
		}
	}
}