#include <iostream>
using namespace std;

string s;

int main() {
	int result = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] != s[i + 1]) {
			result++;
		}
	}

	if (result != 0) {
		result /= 2;
	}

	cout << result;

	return 0;
}