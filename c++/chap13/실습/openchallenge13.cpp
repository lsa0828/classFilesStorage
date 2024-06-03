#include <iostream>
#include <string>
using namespace std;

class HardwareException {
	string step;
	string msg;
public:
	HardwareException(string step = "", string msg = "") {
		this->step = step;
		this->msg = msg;
	}
	string getStep() { return step; }
	string getMsg() { return msg; }
	void setMsg(string msg) { this->msg = msg; }
	void what() { cout << step; }
};

class CPU {
	string instruction;
	int op1, op2;
	string cmd;
	void fetch() throw(HardwareException) {
		if (instruction == "")
			throw HardwareException("fetch", "명령 라인 없음");
	}
	void decode() throw(HardwareException) {
		if (cmd != "ADD" && cmd != "SUB" && cmd != "MUL" && cmd != "DIV")
			throw HardwareException("decode", "invalid 명령어 예외");
		if (op1 == NULL || op2 == NULL)
			throw HardwareException("decode", "피연산자 예외");
	}
	void execute() throw(HardwareException) {
		if (op2 == 0)
			throw HardwareException("execute", "0으로 나누는 예외");
	}
public:
	CPU() { instruction = ""; cmd = ""; op1 = NULL; op2 = NULL; }
	void run() {
		while (true) {
			try {
				getline(cin, instruction);
				fetch();
				cmd = instruction.substr(0, 3);
				decode();
				string a, b;
				int size = (int)instruction.length();
				for (int i = 4; i < size; i++) {
					if (instruction[i] == ' ') {
						a = instruction.substr(4, i - 4);
						b = instruction.substr(i + 1, size - i - 1);
						break;
					}
					if (i == size - 1) break;
				}
				if (a == "" || b == "") decode();
				op1 = stringToInt(a);
				op2 = stringToInt(b);
				if (cmd == "DIV") execute();
				cout << "\t" << cmd << ' ' << op1 << ' ' << op2 << ":\t";
				if (cmd == "ADD") cout << op1 + op2 << endl;
				else if (cmd == "SUB") cout << op1 - op2 << endl;
				else if (cmd == "MUL") cout << op1 * op2 << endl;
				else if (cmd == "DIV") cout << op1 / op2 << endl;
			}
			catch (HardwareException &e) {
				cout << e.getStep() << " 스텝, " << e.getMsg() << endl;
				break;
			}
		}
	}
	static int stringToInt(string x){
		return stoi(x);
	}
};

int main() {
	CPU c;
	c.run();
}