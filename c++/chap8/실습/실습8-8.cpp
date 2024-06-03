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
		cout << "프린트하였습니다." << endl;
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
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		}
		else if (availableInk < pages) {
			cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
		}
		else {
			print(pages);
			availableInk -= pages;
		}
	}
	void show() {
		cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장 ,남은 잉크 " << availableInk << endl;
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
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		}
		else if (availableToner < 1) {
			cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
		}
		else {
			print(pages);
			availableToner -= 1;
		}
	}
	void show() {
		cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장 ,남은 토너 " << availableToner << endl;
	}
};

int main() {
	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	InkJetPrinter* ink=new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* laser=new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
	cout << "잉크젯 : "; ink->show();
	cout << "레이저 : "; laser->show();
	int printer, pages;
	char answer;
	do {
		cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> printer >> pages;
		if (printer == 1) {
			ink->printInkJet(pages);
		}
		else if (printer == 2) {
			laser->printLaser(pages);
		}
		ink->show();
		laser->show();
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> answer;
	} while (answer == 'y');
}