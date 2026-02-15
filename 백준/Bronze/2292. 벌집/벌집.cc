#include <iostream>
using namespace std;

int main() {
	int N, answer = 1, max = 1, add = 6;
	cin >> N;

	while (1) {
		if (N <= max) {
			break;
		}
		max += add;
		add += 6;
		++answer;
	}

	cout << answer;

	return 0;
}