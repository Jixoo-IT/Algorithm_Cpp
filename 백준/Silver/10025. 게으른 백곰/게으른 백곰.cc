#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	int n, k, answer = 0, sum = 0;
	cin >> n >> k;

	while (n--) {
		int g, x;
		cin >> g >> x;
		arr[x] = g;
	}

	int K = 2 * k + 1;

	for (int i = 0; i <= 1000000; i++) {
		if (i >= K) {
			sum -= arr[i - K];
		}
		sum += arr[i];
		answer = max(answer, sum);
	}

	cout << answer;
	return 0;
}