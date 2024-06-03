#include <iostream>
#include <iomanip>
using namespace std;

class Machine {
	int coffee, sugar, cream, water, cup;
public:
	Machine() {
		cout << "------��ǰ Ŀ�� ���Ǳ��մϴ�.------" << endl;
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
		cout << "���� Ŀ��:0, ���� Ŀ��:1, �� Ŀ��:2, ä���:3, ����:4>> ";
		cin >> n;
		switch (n) {
		case 0:
			if (coffee > 0 && water > 0 && cup > 0) {
				cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~" << endl;
				coffee--; water--; cup--;
				show();
			}
			else
				cout << "��ᰡ �����մϴ�." << endl;
			break;
		case 1:
			if (coffee > 0 && sugar > 0 && water > 0 && cup > 0) {
				cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~" << endl;
				coffee--; sugar--; water--; cup--;
				show();
			}
			else
				cout << "��ᰡ �����մϴ�." << endl;
			break;
		case 2:
			if (coffee > 0 && cream > 0 && water > 0 && cup > 0) {
				cout << "���ִ� �� Ŀ�� ���Խ��ϴ�~" << endl;
				coffee--; cream--; water--; cup--;
				show();
			}
			else
				cout << "��ᰡ �����մϴ�." << endl;
			break;
		case 3:
			cout << "��� ���� ä��ϴ�.~~" << endl;
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