#include <iostream>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, sum = 0;
	string str, answer;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> str;


		for (char c : str) {
			if (c == 'Z') {
				c = 'A';
			}
			else {
				c = c + 1;
			}
			answer += c;
		}

		cout << "String #" << i << "\n" << answer << "\n\n";
		answer = "";
	}

	return 0;
}