#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, answer = 0;

	cin >> n >> k;

	vector<int> v(n);

	for (int i = n - 1; i >= 0; i--) {
		cin >> v[i];
	}

	for (int i = 0; i < n; i++) {
		while (k - v[i] >= 0) {
			answer++;
			k -= v[i];
		}
	}

	cout << answer << '\n';

	return 0;
}