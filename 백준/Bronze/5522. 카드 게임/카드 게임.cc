#include <iostream>
using namespace std;

int main() {
	int n, answer = 0;

	for (int i = 0; i < 5; i++) {
		cin >> n;
		answer += n;
	}

	cout << answer;

	return 0;
}