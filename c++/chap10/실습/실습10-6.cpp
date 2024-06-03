#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	T* n = new T;
	int num = 0, a = sizeMinus;
	for (int i = 0; i < sizeSrc; i++) {
		for (int j = 0; j < sizeMinus; j++) {
			if (src[i] != minus[j]) a--;
		}
		if (a == 0)
			n[num++] = src[i];
		a = sizeMinus;
	}
	retSize = num;
	return n;
}

int main() {
	int src[] = {1,2,3,4,5,6,7,8,9,10};
	int minus[] = {5,11,4,0,9};
	int num = 0;
	int* n = remove(src, 10, minus, 5, num);
	
	for (int i = 0; i < num; i++)
		cout << n[i] << ' ';
}