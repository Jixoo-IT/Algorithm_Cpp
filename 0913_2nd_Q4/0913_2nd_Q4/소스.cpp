#include <iostream>
using namespace std;

int main() {
	string num;
	int val0, val1, val2, val3;

	cout << "Please enter a string from zero to three: ";
	cin >> num;

	val0 = 0;
	val1 = 1;
	val2 = 2;
	val3 = 3;

	if (num == "zero") {		// �ڹٴ� = = �ϸ� �ּҸ� ����. C++�� value�� ����. switch ���� �� �ɱ� �ϴ� �ǹ��� ���.
		cout << val0 << endl;
	}
	else if (num == "one") {
		cout << val1 << endl;
	}
	else if (num == "two") {
		cout << val2 << endl;
	}
	else if (num == "three") {
		cout << val3 << endl;
	}
	else {
		cout << "stupid computer!" << endl;
	}

	return 0;
}


/* 
	if (num == "zero") {
		cout << 0;
	}
	else if (num == "one") {
		cout << 1;
	}
	else if (num == "two") {
		cout << 2;
	}
	else if (num == "three") {
		cout << 3;
	}
	else {
		cout << "stupid computer!" << endl;
	}
*/


/*
	string str;

	switch (str) {			// ������. switch������ string(user defined type)�� �� ����. �߿��� ����!!!
		case "zero" :
			cout << 0;
			break;
		case "one" :
			cout << 1;
			break;

*/