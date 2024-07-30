#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int c;

	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	
	return a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, s, a, tmp = -1;		// int형은 10의 9승, long long형은 10의 18승까지 표현 가능

	cin >> n >> s;

	for (int i = 0; i < n; i++) {
		cin >> a;
		int distance = (s > a) ? (s - a) : (a - s);		// 삼항 연산자 | (조건식) ? (참일 때 값) : (거짓일 때 값)
	
		if (tmp == -1) {
			tmp = distance;
		}
		else {
			tmp = gcd(tmp, distance);
		}
	}

	cout << tmp << "\n";

	return 0;
}