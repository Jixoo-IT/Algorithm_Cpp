#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, score;
	int dp[301], stair[301] = {0, };

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> score;
		stair[i] = score;
	}

	dp[1] = stair[1];
	dp[2] = stair[1] + stair[2];
	dp[3] = max(stair[1] + stair[3] , stair[2] + stair[3]);

	// Bottom-up 방식
	for (int i = 4; i <= n; i++) {
		dp[i] = max(dp[i - 2] + stair[i], dp[i - 3] + stair[i - 1] + stair[i]);
	}

	cout << dp[n];

	return 0;
}