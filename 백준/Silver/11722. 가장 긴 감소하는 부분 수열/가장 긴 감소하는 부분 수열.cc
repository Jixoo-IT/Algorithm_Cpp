#include <iostream>
#include <algorithm>
using namespace std;

int n, sum;
int A[1001];
int dp[1001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < n; i++) {
		dp[i] = 1;

		for (int j = 0; j < i; j++) {
			if (A[i] < A[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		sum = max(sum, dp[i]);
	}
	cout << sum;
}