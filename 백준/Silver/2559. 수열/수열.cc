#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, sum = 0, answer = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < k; i++) {
		sum += arr[i];
	}

	answer = sum;

	for (int i = k; i < n; i++) {
		sum += arr[i];
		sum -= arr[i - k];
		answer = max(answer, sum);
	}

	cout << answer;

	return 0;
}