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

	if (num == "zero") {		// 자바는 = = 하면 주소를 비교함. C++은 value를 비교함. switch 문은 안 될까 하는 의문이 든다.
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

	switch (str) {			// 오류남. switch문에는 string(user defined type)을 못 넣음. 중요한 교훈!!!
		case "zero" :
			cout << 0;
			break;
		case "one" :
			cout << 1;
			break;

*/