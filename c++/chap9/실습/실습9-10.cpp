#include <iostream>
using namespace std;

class Shape {
	Shape* next;
protected:
	virtual void draw() = 0;
public:
	Shape() { next = NULL; }
	virtual ~Shape() {}
	void paint() { draw(); }
	Shape* add(Shape* p) {
		this->next = p;
		return p;
	}
	Shape* getNext() { return next; }

};

void Shape::draw() {
	cout << "--Shape--" << endl;
}

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

class GraphicEditor {
	Shape* pStart;
	Shape* pLast;
	int i;
public:
	GraphicEditor() {
		cout << "그래픽 에디터입니다." << endl;
		pStart = NULL; pLast = NULL;
		i = 0;
	}
	void insert() {
		int s;
		cout << "선:1, 원:2, 사각형:3 >> ";
		cin >> s;
		if (s == 1) {
			if (i == 0) {
				pStart = new Line();
				pLast = pStart;
			}
			else {
				pLast = pLast->add(new Line());
			}
			i++;
		}
		else if (s == 2) {
			if (i == 0) {
				pStart = new Circle();
				pLast = pStart;
			}
			else {
				pLast = pLast->add(new Circle());
			}
			i++;
		}
		else if (s == 3) {
			if (i == 0) {
				pStart = new Rect();
				pLast = pStart;
			}
			else {
				pLast = pLast->add(new Rect());
			}
			i++;
		}
	}
	void remove() {
		int n;
		Shape* p = pStart;
		cout << "삭제하고자 하는 도형의 인덱스 >> ";
		cin >> n;
		if (n == 0) {
			pStart = p->getNext();
			i--;
		}
		else if (n <= i) {
			for (int k = 0; k < n - 1; k++) {
				p = p->getNext();
			}
			p->add(p->getNext()->getNext());
			i--;
		}
	}
	void show() {
		Shape* p = pStart;
		for (int k = 0; k < i; k++) {
			cout << k << ": ";
			p->paint();
			p = p->getNext();
		}
	}
};

class UI {
public:
	static void quest(GraphicEditor* g) {
		int q;
		while (true) {
			cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
			cin >> q;
			if (q == 1) g->insert();
			else if (q == 2) g->remove();
			else if (q == 3) g->show();
			else if (q == 4) break;
		}
	}
};

int main() {
	GraphicEditor* g = new GraphicEditor();
	UI::quest(g);
}