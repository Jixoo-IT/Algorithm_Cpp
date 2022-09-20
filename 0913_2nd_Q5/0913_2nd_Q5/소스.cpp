#include <iostream>
using namespace std;

int main() {
	char oprt;		// operator는 사용하면 안 되나봄..
	int val1, val2;

	cin >> oprt >> val1 >> val2;


	switch (oprt) {
	case '+':			// 큰 따옴표 안 됨. 작은 따옴표...
		cout << (val1 + val2);
		break;
	case '-':
		cout << (val1 - val2);
		break;
	case '*':
		cout << (val1 * val2);
		break;
	case '/':
		cout << (val1 / val2);
		break;
	defalut:
		cout << "Not a case I know";
	}

	return 0;
}