#include <iostream>
#include <vector>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius, string name) {
		this->radius = radius;
		this->name = name;
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

int main() {
	vector<Circle*> v;
	vector<Circle*>::iterator it;
	int rad; string name;
	int ans = 0;
	cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�." << endl;
	while (ans != 4) {
		cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
		cin >> ans;
		if (ans == 1) {
			cout << "�����ϰ����ϴ� ���� �������� �̸��� >> ";
			cin >> rad >> name;
			v.push_back(new Circle(rad, name));
		}
		else if (ans == 2) {
			cout << "�����ϰ��� �ϴ� �� �̸��� >> ";
			cin >> name;
			for (int i = 0; i < v.size(); i++) {
				it = v.begin() + i;
				if (v[i]->getName() == name)
					it = v.erase(it);
			}
		}
		else if (ans == 3) {
			for (int i = 0; i < v.size(); i++) {
				cout << v[i]->getName() << endl;
			}
			cout << endl;
		}
	}
}