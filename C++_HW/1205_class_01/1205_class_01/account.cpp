#include <iostream>
#include <string>

using namespace std;

class Account {
	string name;
	int id;
	int money;
public:
	Account(string n, int i, int m);
	int balance();		// �ܾ�
	string getOwner();
	int deposit(int m);		// ����
	int withdraw(int m);	// ���
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
	cout << name << "���� ���°� �����Ǿ����ϴ�." << endl;
}

int main() {
	Account a("����", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << a.balance() << "���Դϴ�." << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << a.balance() << "���Դϴ�." << endl;

	return 0;
}