#include <iostream>
using namespace std;

int main() {
	char oprt;		// operator�� ����ϸ� �� �ǳ���..
	int val1, val2;

	cin >> oprt >> val1 >> val2;


	switch (oprt) {
	case '+':			// ū ����ǥ �� ��. ���� ����ǥ...
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