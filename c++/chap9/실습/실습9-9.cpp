#include <iostream>
#include <string>
using namespace std;

class Printer {
	string model;
	string manufacturer;
	int printedCount = 0;
	int availableCount;
public:
	Printer(string model, string manufacturer, int availableCount) {
		this->model = model;
		this->manufacturer = manufacturer;
		this->availableCount = availableCount;
	}
	virtual bool print(int pages) {
		if (availableCount < pages) {
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
			return false;
		}
		else {
			printedCount = pages;
			availableCount -= printedCount;
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
			return true;
		}
	}
	virtual void show() {
		cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "�� ";
	}
};

class InkJet : public Printer {
	int availableInk;
public:
	InkJet(string model, string manufacturer, int availableCount, int availableInk) : Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
	bool print(int pages) {
		if (availableInk < pages) {
			cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		}
		else {
			bool result = Printer::print(pages);
			if (result) {
				availableInk -= pages;
				return true;
			}
		}
		return false;
	}
	void show() {
		Printer::show();
		cout << ", ���� ��ũ " << availableInk << endl;
	}
};

class Laser : public Printer {
	int availableToner;
public:
	Laser(string model, string manufacturer, int availableCount, int availableToner) : Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
	bool print(int pages) {
		if (availableToner < 1) {
			cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		}
		else {
			bool result = Printer::print(pages);
			if (result) {
				availableToner -= 1;
				return true;
			}
		}
		return false;
	}
	void show() {
		Printer::show();
		cout << ", ���� ��ũ " << availableToner << endl;
	}
};

int main() {
	InkJet* ip = new InkJet("Officejet V40", "HP", 5, 10);
	Laser* lp = new Laser("SCX-6x45", "�Ｚ����", 3, 20);
	
	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : "; ip->show();
	cout << "������ : "; lp->show();
	cout << endl;

	while(true) {
		int printer, pages;
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> printer >> pages;
		if (printer == 1) {
			ip->print(pages);
			ip->show();
			lp->show();
		}
		else if (printer == 2) {
			lp->print(pages);
			ip->show();
			lp->show();
		}
		else {
			cout << "�߸� �������ϴ�." << endl;
		}
		char answer;
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> answer;
		if (answer == 'n') break;
		cout << endl;
	}
}