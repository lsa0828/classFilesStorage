#include <iostream>
#include <vector>
using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
public:
	void paint() { draw(); }
};

class Circle : public Shape {
protected:
	virtual void draw() {
		cout << "Circle" << endl;
	}
};

class Rect : public Shape {
protected:
	virtual void draw() {
		cout << "Rectangle" << endl;
	}
};

class Line : public Shape {
protected:
	virtual void draw() {
		cout << "Line" << endl;
	}
};

int main() {
	vector<Shape*> v;
	int ans = 0;
	cout << "그래픽 에디터입니다." << endl;
	while (ans != 4) {
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
		cin >> ans;
		if (ans == 1) {
			int s;
			cout << "선:1, 원:2, 사각형:3 >> ";
			cin >> s;
			if (s == 1)
				v.push_back(new Line);
			else if (s == 2)
				v.push_back(new Circle);
			else if (s == 3)
				v.push_back(new Rect);
		}
		else if (ans == 2) {
			int i;
			cout << "삭제하고자 하는 도형의 인덱스 >> ";
			cin >> i;
			v.erase(v.begin() + i);
		}
		else if (ans == 3) {
			for (int i = 0; i < v.size(); i++) {
				cout << i << ": ";
				v[i]->paint();
			}
		}
	}
}