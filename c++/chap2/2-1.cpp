/*
	�ҽ�: SimpleC++.cpp
	cout << �����ڸ� �̿��Ͽ� ȭ�鿡 ����Ѵ�
*/

#include <iostream>

int main() {
	std::cout << "Hello\n" << "ù��° ������ �Դϴ�."; //ȭ�鿡 Hello�� ����ϰ� �����ٷ� �Ѿ
	//std::cout << "ù��° ������ �Դϴ�.";
	//std�� standard��� namespace

	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << true;
	std::cout << "n+5=" << n + 5;
	std::cout << "Hello" << '\n';
	std::cout << "Hello" << std::endl;

	return 0;
}