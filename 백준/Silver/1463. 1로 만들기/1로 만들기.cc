#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> dp(n + 1);

	// bottom-up
	dp[1] = 0;
	
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;		// -1 연산을 하는 경우

		if (i % 2 == 0) {
			dp[i] = min(dp[i], dp[i / 2] + 1);		// 나누기 2 연산을 하는 경우 | min 함수를 이용해 연산의 최솟값만 저장함.
		}
		
		if (i % 3 == 0) {
			dp[i] = min(dp[i], dp[i / 3] + 1);		// 나누기 3 연산을 하는 경우
		}
	}
	cout << dp[n];

	return 0;
}