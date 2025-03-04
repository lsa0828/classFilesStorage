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
			cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
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
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
			break;
		}
	}
}

void CircleManager::searchByArea() {
	double area;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;
	cout << area << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ',';
		}
	}
	cout << endl;
}

int main() {
	int n;
	cout << "원의 개수 >> ";
	cin >> n;
	CircleManager circles(n);
	circles.searchByName();
	circles.searchByArea();
}