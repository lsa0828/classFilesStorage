#include <iostream>
#include <string>
#include <locale>
using namespace std;

class Morse {
	string alphabet[26];
	string digit[10];
	string slash, question, comma, period, plus, equal;
	char alp[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char d[10] = { '0','1','2','3','4','5','6','7','8','9' };
public:
	Morse();
	void text2Morse(string text, string& morse);
	bool morse2Text(string morse, string& text);
};

Morse::Morse() {
	alphabet[0] = ".- ";
	alphabet[1] = "-... ";
	alphabet[2] = "-.-. ";
	alphabet[3] = "-.. ";
	alphabet[4] = ". ";
	alphabet[5] = "..-. ";
	alphabet[6] = "--. ";
	alphabet[7] = ".... ";
	alphabet[8] = ".. ";
	alphabet[9] = ".--- ";
	alphabet[11] = "-.- ";
	alphabet[11] = ".-.. ";
	alphabet[12] = "-- ";
	alphabet[13] = "-. ";
	alphabet[14] = "--- ";
	alphabet[15] = ".--. ";
	alphabet[16] = "--.- ";
	alphabet[17] = ".-. ";
	alphabet[18] = "... ";
	alphabet[19] = "- ";
	alphabet[20] = "..- ";
	alphabet[21] = "...- ";
	alphabet[22] = ".-- ";
	alphabet[23] = "-..- ";
	alphabet[24] = "-.-- ";
	alphabet[25] = "--.. ";

	digit[0] = "----- ";
	digit[1] = ".---- ";
	digit[2] = "..--- ";
	digit[3] = "...-- ";
	digit[4] = "....- ";
	digit[5] = "..... ";
	digit[6] = "-.... ";
	digit[7] = "--... ";
	digit[8] = "----.. ";
	digit[9] = "----. ";

	slash = "-..-. ";
	question = "..--.. ";
	comma = "--..-- ";
	period = ".-.-.- ";
	plus = ".-.-. ";
	equal = "-...- ";
}

void Morse::text2Morse(string text, string& morse) {
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == ' ') morse += "   ";
		else {
			if (isalpha(text[i])) {
				for (int j = 0; j < 26; j++) {
					if (text[i] == alp[j])
						morse += alphabet[j];
				}
			}
			else if (isdigit(text[i])) {
				for (int j = 0; j < 10; j++) {
					if (text[i] == d[j])
						morse += digit[j];
				}
			}
			else {
				if (text[i] == '/') morse += slash;
				else if (text[i] == '?') morse += question;
				else if (text[i] == ',') morse += comma;
				else if (text[i] == '.') morse += period;
				else if (text[i] == '+') morse += plus;
				else if (text[i] == '=') morse += equal;
			}
		}
	}
}

bool Morse::morse2Text(string morse, string& text) {
	string textcheck = text;
	text = "";
	string tm;
	int a = 0;
	for (int i=0; i<morse.length(); i++) {
		if (morse[i] == ' ') {
			for (int j = a; j <= i; j++) {
				tm += morse[j];
			}
			for (int k = 0; k < 26; k++) {
				if (tm == alphabet[k])
					text += alp[k];
				else if (k < 10 && tm == digit[k])
					text += d[k];
			}
			if (tm == slash) text += '/';
			else if (tm == question) text += '?';
			else if (tm == comma) text += ',';
			else if (tm == period) text += '.';
			else if (tm == plus) text += '+';

			if (morse[i + 1] == ' ' && morse[i + 2] == ' ') {
				text += ' ';
				a = i + 3;
			}
			else {
				a = i + 1;
			}
			i = a - 1;
			tm = "";
		}
	}
	if (textcheck == text) return true;
	else return false;
}

int main() {
	Morse m;
	string text, morse="";
	cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다." << endl;
	getline(cin, text);
	m.text2Morse(text, morse);
	cout << morse << endl << endl;
	cout << "모스 부호를 다시 영문 텍스트로 바꿉니다." << endl;
	if (m.morse2Text(morse, text)) cout << "true" << endl;
	else cout << "false" << endl;
	cout << text;
}