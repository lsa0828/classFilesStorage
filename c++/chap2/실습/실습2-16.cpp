#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char buf[10000];
	int num = 0;
	char alpha[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int alphaNum[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl
		<< "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
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
	cout << "�� ���ĺ� �� " << num << "\n\n";
	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " (" << alphaNum[i] << ")  : ";
		for (int j = 0; j < alphaNum[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}