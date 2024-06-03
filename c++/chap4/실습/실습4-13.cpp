#include <iostream>
#include <locale>
using namespace std;

class Histogram {
	string s;
public:
	Histogram(string s) { this->s = s; }
	void put(string s) { this->s += s; }
	void putc(char c) { this->s += c; }
	void print();
};

void Histogram::print() {
	cout << s << endl << endl;
	char alp[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	string c = "";
	for (int i = 0; i < s.length(); i++) {
		if (isalpha(s[i])) c += tolower(s[i]);
	}
	cout << "ÃÑ ¾ËÆÄºª ¼ö " << c.length() << endl << endl;
	for (int i = 0; i < 26; i++) {
		int a = 0;
		for (int j = 0; j < c.length(); j++) {
			if (c[j] == alp[i]) a += 1;
		}
		cout << alp[i] << " (" << a << ")\t: ";
		for (int k = 0; k < a; k++) cout << '*';
		cout << endl;
	}
}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}