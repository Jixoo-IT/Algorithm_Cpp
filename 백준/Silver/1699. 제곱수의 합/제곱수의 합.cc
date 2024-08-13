#include <iostream>
#include <algorithm>
using namespace std;

int dp[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		dp[i] = i;		// 숫자가 모두 1로 이루어져 있으면, dp[i]를 이루는 항은 i개이므로

		for (int j = 1; j * j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}
	cout << dp[n];

	return 0;
}