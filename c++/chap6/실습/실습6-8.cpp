#include <iostream>
using namespace std;

class Trace {
	static string debug[100][2];
	static int size;
public:
	static void put(string a, string b) {
		debug[size][0] = a;
		debug[size][1] = b;
		size++;
	}
	static void print(string a = "��� ") {
		cout << "----- " << a << "�±��� Trace ������ ����մϴ�. -----" << endl;
		if (a == "��� ") {
			for (int i = 0; i < size; i++) {
				cout << debug[i][0] << ':' << debug[i][1] << endl;
			}
		}
		else {
			for (int i = 0; i < size; i++) {
				if (debug[i][0] == a)
					cout << debug[i][0] << ':' << debug[i][1] << endl;
			}
		}
	}
};

string Trace::debug[][2];
int Trace::size = 0;

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

int main() {
	Trace::put("main()", "���α׷� �����մϴ�");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}