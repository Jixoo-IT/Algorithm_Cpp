#include <iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	for (int i = 1; i < N; i++) {
		int tmp = i;;
		int sum = i;

		while (tmp != 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		if (N == sum) {
			cout << i << "\n";
			return 0;
		}
	}
	cout << 0 << "\n";
	return 0;
}