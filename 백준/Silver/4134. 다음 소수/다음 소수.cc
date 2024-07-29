#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

bool IsPrime(ll n) {
	if (n < 2) {
		return false;
	}

	int sqrtN = sqrt(n);

	for (ll i = 2; i <= sqrtN; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		ll m;
		cin >> m;
		while (!IsPrime(m)) {		// n이 소수가 아니라면(false인 경우)
			m++;
		}
		cout << m << "\n";
	}
	return 0;
}