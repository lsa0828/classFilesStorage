#include <iostream>

double area(int r); // 함수의 원형 선언
double area(int r) {// 함수구현
	return 3.14 * r * r;// 반지름 r의 원면적 리턴
}

int main() {
	int n = 3;
	char c = '#';

	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
	std::cout << "n+5=" << n + 5 << '\n';
	std::cout << "면적은" << area(n);// 함수 area의 리턴값 출력
}