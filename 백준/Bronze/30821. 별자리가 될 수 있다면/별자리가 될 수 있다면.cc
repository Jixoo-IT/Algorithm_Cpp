#include <iostream>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	long long answer = 1;

	cin >> n;

	for (int i = 0; i < 5; i++) {
		answer *= (n - i);
	}

	for (int i = 0; i < 5; i++) {
		answer /= (i + 1);
	}

	cout << answer;

	return 0;
}