#include <iostream>
using namespace std;

int main() {
	int T, a, b, c;
	cin >> T;

	if (T % 10 != 0) {
		cout << -1;
		return 0;
	}

	a = T / 300;
	T %= 300;

	b = T / 60;
	T %= 60;

	c = T / 10;
	T %= 10;

	cout << a << " " << b << " " << c;

	return 0;
}