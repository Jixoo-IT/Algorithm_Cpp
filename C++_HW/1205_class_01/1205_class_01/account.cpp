#include <iostream>
#include <string>

using namespace std;

class Account {
	string name;
	int id;
	int money;
public:
	Account(string n, int i, int m);
	int balance();		// 잔액
	string getOwner();
	int deposit(int m);		// 저금
	int withdraw(int m);	// 출금
	~Account();
};

Account::Account(string n, int i, int m) {
	name = n;
	id = i;
	money = m;
}

int Account::balance() {
	return money;
}

string Account::getOwner() {
	return name;
}

int Account::deposit(int m) {
	return money += m;
}

int Account::withdraw(int m) {
	return money -= m;
}

Account::~Account() {
	cout << name << "님의 계좌가 삭제되었습니다." << endl;
}

int main() {
	Account a("기태", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << a.balance() << "원입니다." << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << a.balance() << "원입니다." << endl;

	return 0;
}