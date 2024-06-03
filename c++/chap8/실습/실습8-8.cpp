#include <iostream>
#include <string>
using namespace std;

class Printer {
protected:
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	Printer(string model, string manufacturer, int availableCount) {
		this->model = model;
		this->manufacturer = manufacturer;
		this->printedCount = 0;
		this->availableCount = availableCount;
	}
	void print(int pages) {
		cout << "����Ʈ�Ͽ����ϴ�." << endl;
		printedCount = pages;
		availableCount -= printedCount;
	}
};

class InkJetPrinter : Printer {
	int availableInk;
public:
	InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk) : Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
	void printInkJet(int pages) {
		if (availableCount < pages) {
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		}
		else if (availableInk < pages) {
			cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		}
		else {
			print(pages);
			availableInk -= pages;
		}
	}
	void show() {
		cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "�� ,���� ��ũ " << availableInk << endl;
	}
};

class LaserPrinter : Printer {
	int availableToner;
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) : Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
	void printLaser(int pages) {
		if (availableCount < pages) {
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		}
		else if (availableToner < 1) {
			cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		}
		else {
			print(pages);
			availableToner -= 1;
		}
	}
	void show() {
		cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "�� ,���� ��� " << availableToner << endl;
	}
};

int main() {
	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	InkJetPrinter* ink=new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* laser=new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);
	cout << "��ũ�� : "; ink->show();
	cout << "������ : "; laser->show();
	int printer, pages;
	char answer;
	do {
		cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> printer >> pages;
		if (printer == 1) {
			ink->printInkJet(pages);
		}
		else if (printer == 2) {
			laser->printLaser(pages);
		}
		ink->show();
		laser->show();
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> answer;
	} while (answer == 'y');
}