/*
	소스: SimpleC++.cpp
	cout << 연산자를 이용하여 화면에 출력한다
*/

#include <iostream>

int main() {
	std::cout << "Hello\n" << "첫번째 맛보기 입니다."; //화면에 Hello를 출력하고 다음줄로 넘어감
	//std::cout << "첫번째 맛보기 입니다.";
	//std는 standard라는 namespace

	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << true;
	std::cout << "n+5=" << n + 5;
	std::cout << "Hello" << '\n';
	std::cout << "Hello" << std::endl;

	return 0;
}