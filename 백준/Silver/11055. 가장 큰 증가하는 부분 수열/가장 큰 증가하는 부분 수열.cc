#include <iostream>
#include <algorithm>
using namespace std;

int n;
int dp[1001], arr[1001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		dp[i] = arr[i];
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + arr[i]);
			}
		}
		sum = max(sum, dp[i]);
	}
	cout << sum;
	
	return 0;
}