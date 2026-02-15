#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int r = a % b;
	while (r != 0) {
		a = b;
		b = r;
		r = a % b;
	}

	return b;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}


int main() {
	int a, b, temp, GCD, LCM;

	cin >> a >> b;

	if (a < b) {		// 큰 숫자: a, 작은 숫자: b
		temp = a;
		a = b;
		b = temp;
	}

	GCD = gcd(a, b);
	LCM = lcm(a, b);

	cout << GCD << "\n" << LCM;

	return 0;
}