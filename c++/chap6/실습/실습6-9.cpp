#include <iostream>
using namespace std;

class Board {
	static string* a;
	static int size;
public:
	static void add(string s) {
		a[size] = s;
		size++;
	}
	static void print() {
		cout << "************ �Խ����Դϴ�. ************" << endl;
		for (int i = 0; i < size; i++) {
			cout << i << ": " << a[i] << endl;
		}
		cout << endl;
	}
};

string* Board::a = new string[100];
int Board::size = 0;

int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}