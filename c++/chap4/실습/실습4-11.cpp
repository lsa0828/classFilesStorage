#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill() { size = 10; }
	void consume() { size -= 1; }
	int getSize() { return size; }
};

class CoffeeVendingMachine {
	Container tong[3];
	void fill() { 
		for (int i = 0; i < 3; i++) tong[i].fill();
		show();
	}
	void selectEspresso() { 
		if (tong[0].getSize() < 1 || tong[1].getSize() < 1) cout << "���ᰡ �����մϴ�." << endl;
		else {
			tong[0].consume(); tong[1].consume();
			cout << "���������� �弼��" << endl;
		}
	}
	void selectAmericano() {
		if (tong[0].getSize() < 1 || tong[1].getSize() < 2) cout << "���ᰡ �����մϴ�." << endl;
		else {
			tong[0].consume(); tong[1].consume(); tong[1].consume();
			cout << "�Ƹ޸�ī�� �弼��" << endl;
		}
	}
	void selectSugarCoffee() {
		if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize() < 1) cout << "���ᰡ �����մϴ�." << endl;
		else {
			tong[0].consume(); tong[1].consume(); tong[1].consume(); tong[2].consume();
			cout << "����Ŀ�� �弼��" << endl;
		}
	}
	void show() {
		cout << "Ŀ�� " << tong[0].getSize() << ", "
			<< "�� " << tong[1].getSize() << ", "
			<< "���� " << tong[2].getSize() << endl;

	}
public:
	void run() { 
		int m;
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���>>";
		cin >> m;
		if (m == 1) selectEspresso();
		else if (m == 2) selectAmericano();
		else if (m == 3) selectSugarCoffee();
		else if (m == 4) show();
		else if (m == 5) fill();
		else cout << "�߸� �������ϴ�." << endl;
	}
};

int main() {
	CoffeeVendingMachine cvm;
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
	while (true) {
		cvm.run();
	}
}