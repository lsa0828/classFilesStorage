#include <iostream>
using namespace std;

const double PI = 3.141592;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) { this->radius = radius; this->name = name; }
	double getArea() { return radius* radius* PI; }
	string getName() { return name; }
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size) { 
		p = new Circle[size];
		this->size = size;
		string name;
		int radius;
		for (int i = 0; i < size; i++) {
			cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
			cin >> name >> radius;
			p[i].setCircle(name, radius);
		}
	}
	~CircleManager() { delete[] p; }
	void searchByName();
	void searchByArea();
};

void CircleManager::searchByName() {
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
			break;
		}
	}
}

void CircleManager::searchByArea() {
	double area;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;
	cout << area << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ',';
		}
	}
	cout << endl;
}

int main() {
	int n;
	cout << "���� ���� >> ";
	cin >> n;
	CircleManager circles(n);
	circles.searchByName();
	circles.searchByArea();
}