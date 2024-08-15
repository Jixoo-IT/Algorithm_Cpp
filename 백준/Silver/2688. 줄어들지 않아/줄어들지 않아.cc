#include <iostream>
#include <algorithm>
using namespace std;

long long dp[65][10];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	for (int i = 0; i <= 9; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= 64; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = j; k <= 9; k++) {
				dp[i][j] += dp[i - 1][k];
			}
		}
	}

	int t, n;
	long long answer;

	cin >> t;

	while (t--) {
		cin >> n;
		answer = 0;		// 초기화 필수
		for (int i = 0; i <= 9; i++) {
			answer += dp[n][i];
		}
		cout << answer << "\n";
	}

	return 0;
}