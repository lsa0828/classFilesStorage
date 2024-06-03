#include <iostream>
#include <iomanip>
using namespace std;

class Machine {
	int coffee, sugar, cream, water, cup;
public:
	Machine() {
		cout << "------명품 커피 자판기켭니다.------" << endl;
		coffee = sugar = cream = water = cup = 3;
		show();
	}
	void showStar(int n) {
		for (int i = 0; i < n; i++)
			cout << '*';
	}
	void show() {
		cout.setf(ios::left);
		cout << setw(8) << "Coffee"; showStar(coffee); cout << endl;
		cout << setw(8) << "Sugar"; showStar(sugar); cout << endl;
		cout << setw(8) << "CREAM"; showStar(cream); cout << endl;
		cout << setw(8) << "Water"; showStar(water); cout << endl;
		cout << setw(8) << "Cup"; showStar(cup); cout << endl << endl;
	}
	int order() {
		int n;
		cout << "보통 커피:0, 설탕 커피:1, 블랙 커피:2, 채우기:3, 종료:4>> ";
		cin >> n;
		switch (n) {
		case 0:
			if (coffee > 0 && water > 0 && cup > 0) {
				cout << "맛있는 보통 커피 나왔습니다~" << endl;
				coffee--; water--; cup--;
				show();
			}
			else
				cout << "재료가 부족합니다." << endl;
			break;
		case 1:
			if (coffee > 0 && sugar > 0 && water > 0 && cup > 0) {
				cout << "맛있는 설탕 커피 나왔습니다~" << endl;
				coffee--; sugar--; water--; cup--;
				show();
			}
			else
				cout << "재료가 부족합니다." << endl;
			break;
		case 2:
			if (coffee > 0 && cream > 0 && water > 0 && cup > 0) {
				cout << "맛있는 블랙 커피 나왔습니다~" << endl;
				coffee--; cream--; water--; cup--;
				show();
			}
			else
				cout << "재료가 부족합니다." << endl;
			break;
		case 3:
			cout << "모든 통을 채웁니다.~~" << endl;
			coffee = sugar = cream = water = cup = 3;
			show();
			break;
		case 4:
			break;
		}
		return n;
	}
};

int main() {
	Machine m;
	while (m.order() != 4) { }
}