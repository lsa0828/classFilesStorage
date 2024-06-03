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
	static void print(string a = "모든 ") {
		cout << "----- " << a << "태그의 Trace 정보를 출력합니다. -----" << endl;
		if (a == "모든 ") {
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
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main() {
	Trace::put("main()", "프로그램 시작합니다");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();
}