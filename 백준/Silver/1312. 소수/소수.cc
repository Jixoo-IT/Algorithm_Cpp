#include <iostream>
using namespace std;

int main() {
	int a, b, n, ans = 0;

	cin >> a >> b >> n;

	if (a % b == 0) {
		cout << 0;
		return 0;
	}

	a = a % b;

	for (int i = 0; i < n; i++) {
		a = a % b;
		a *= 10;
		ans = a / b;
	}

	cout << ans;

	return 0;
}