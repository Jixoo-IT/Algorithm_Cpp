#include <iostream>
#include <bitset>
using namespace std;

long long k;

long long f(long long x) {
	if (x == 0) {
		return 0;
	}
	else if (x == 1) {
		return 1;
	}
	else if (x % 2 == 0) {
		return f(x / 2);
	}
	else {
		return 1 - f(x / 2);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> k;

	cout << f(k - 1);

	return 0;
}