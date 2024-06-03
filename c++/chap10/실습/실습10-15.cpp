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
	cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;
	while (ans != 4) {
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
		cin >> ans;
		if (ans == 1) {
			cout << "생성하고자하는 원의 반지름과 이름은 >> ";
			cin >> rad >> name;
			v.push_back(new Circle(rad, name));
		}
		else if (ans == 2) {
			cout << "삭제하고자 하는 원 이름은 >> ";
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