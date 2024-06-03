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
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
			return false;
		}
		else {
			printedCount = pages;
			availableCount -= printedCount;
			cout << "프린트하였습니다." << endl;
			return true;
		}
	}
	virtual void show() {
		cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장 ";
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
			cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
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
		cout << ", 남은 잉크 " << availableInk << endl;
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
			cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
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
		cout << ", 남은 잉크 " << availableToner << endl;
	}
};

int main() {
	InkJet* ip = new InkJet("Officejet V40", "HP", 5, 10);
	Laser* lp = new Laser("SCX-6x45", "삼성전자", 3, 20);
	
	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : "; ip->show();
	cout << "레이저 : "; lp->show();
	cout << endl;

	while(true) {
		int printer, pages;
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
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
			cout << "잘못 눌렀습니다." << endl;
		}
		char answer;
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> answer;
		if (answer == 'n') break;
		cout << endl;
	}
}