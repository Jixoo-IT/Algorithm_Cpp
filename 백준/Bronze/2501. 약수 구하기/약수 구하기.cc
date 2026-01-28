#include <iostream>
using namespace std;

int main() {
	int n, k, cnt = 0;
	int i;
	cin >> n >> k;

	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			cnt++;
		}

		if (cnt == k) {
			break;
		}
	}

	if (i <= n) {
		cout << i;
	}
	else {
		cout << "0";
	}
}