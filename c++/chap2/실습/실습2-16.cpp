#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char buf[10000];
	int num = 0;
	char alpha[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int alphaNum[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl
		<< "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(buf, 10000, ';');
	for (int i = 0; i < strlen(buf); i++) {
		if (isalpha(buf[i])) {
			buf[i] = tolower(buf[i]);
			for (int j = 0; j < 26; j++) {
				if (buf[i] == alpha[j]) alphaNum[j] += 1;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		num += alphaNum[i];
	}
	cout << "총 알파벳 수 " << num << "\n\n";
	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " (" << alphaNum[i] << ")  : ";
		for (int j = 0; j < alphaNum[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}