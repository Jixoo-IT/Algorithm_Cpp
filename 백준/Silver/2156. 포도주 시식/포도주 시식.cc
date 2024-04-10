#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, amount;
	int dp[10001], wine[10001] = { 0, };

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> amount;
		wine[i] = amount;
	}

	dp[1] = wine[1];
	dp[2] = wine[1] + wine[2];

	// Bottom-up 방식
	for (int i = 3; i <= n; i++) {
		dp[i] = max(dp[i - 2] + wine[i], dp[i - 3] + wine[i - 1] + wine[i]);
		dp[i] = max(dp[i - 1], dp[i]);
	}

	cout << dp[n];

	return 0;
}