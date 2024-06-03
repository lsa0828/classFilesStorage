#include <iostream>
#include <locale>
using namespace std;

class Histogram {
	string str;
public:
	Histogram(string s) { str = s; }
	Histogram& operator <<(string s) {
		str += s;
		return *this;
	}
	Histogram& operator << (char c) {
		str += c;
		return *this;
	}
	void operator ! () {
		cout << str << endl << endl;
		string s;
		for (int i = 0; i < str.length(); i++) {
			if (isalpha(str[i])) {
				s += tolower(str[i]);
			}
		}
		cout << "ÃÑ ¾ËÆÄºª ¼ö " << s.length() << endl;
		char alp[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
		int alpNum[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < 26; j++) {
				if (s[i] == alp[j]) alpNum[j] += 1;
			}
		}
		for (int i = 0; i < 26; i++) {
			cout << alp[i] << ':';
			for (int j = 0; j < alpNum[i]; j++) {
				cout << '*';
			}
			cout << endl;
		}
	}
};

int main() {
	Histogram song("Wise men say, \nonly fools rush in But I can't help, \n");
	song << "falling" << " in love with you." << "- by ";
	song << 'k' << 'i' << 't';
	!song;
}