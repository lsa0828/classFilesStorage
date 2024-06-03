#include <iostream>
#include <string>
using namespace std;

class Account {
	string name;
	int id;
	int balance;
public:
	Account(string n, int i, int b);
	int deposit(int p);
	int withdraw(int p);
	string getOwner();
	int inquiry();
};

Account::Account(string n, int i, int b) {
	name = n;
	id = i;
	balance = b;
}

int Account::deposit(int p) {
    balance += p;
	return balance;
}

int Account::withdraw(int p) {
	balance -= p;
	return balance;
}

string Account::getOwner() {
	return name;
}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}