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
		cout << "************ 게시판입니다. ************" << endl;
		for (int i = 0; i < size; i++) {
			cout << i << ": " << a[i] << endl;
		}
		cout << endl;
	}
};

string* Board::a = new string[100];
int Board::size = 0;

int main() {
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}