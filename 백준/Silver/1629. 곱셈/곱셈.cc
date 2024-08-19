#include <iostream>
using namespace std;

long long a, b, c, k;

long long f(long long a, long long b, long long c) {
	if (b == 0) {
		return 1;
	} else if (b == 1) {
		return  a % c;
	}

	k = f(a, b / 2, c);
	
	if (b % 2 == 0) {		// b가 짝수일 때
		return k * k % c;
	}
	else {		// b가 홀수일 때
		return (k * k % c) * (a % c) % c;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> a >> b >> c;

	cout << f(a, b, c);

	return 0;
}