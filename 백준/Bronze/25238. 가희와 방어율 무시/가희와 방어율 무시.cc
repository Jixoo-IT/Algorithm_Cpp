#include <iostream>
using namespace std;

int main() {
	double a, b, defence;

	cin >> a >> b;

	defence = a * (100 - b) / 100;

	if (defence >= 100) {
		cout << "0";
	}
	else {
		cout << "1";
	}
	return 0;
}