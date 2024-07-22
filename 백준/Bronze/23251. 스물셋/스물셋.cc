#include <iostream>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T, k;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> k;

		cout << 23 * k << "\n";
	}
}