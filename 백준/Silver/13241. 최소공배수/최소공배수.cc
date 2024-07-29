#include <iostream>
using namespace std;

long long gcd(long long x, long long y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}

long long lcm(long long x, long long y) {
	return x * y / gcd(x, y);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long a, b;

	cin >> a >> b;

	cout << lcm(a, b);

	return 0;
}