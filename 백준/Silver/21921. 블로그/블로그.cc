#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x, cnt = 0, sum = 0, answer, max = -1;
	cin >> n >> x;

	int arr[250001];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < x; i++) {
		sum += arr[i];
	}

	answer = sum;
	cnt = 1;

	for (int i = x; i < n; i++) {
		sum += arr[i];
		sum -= arr[i - x];
		if (sum > answer) {
			answer = sum;
			cnt = 1;
		}
		else if (sum == answer) {
			cnt++;		// 최대 조회수인 기간이 더 있다면 cnt++
		}
	}

	if (answer == 0) {
		cout << "SAD";
	}
	else {
		cout << answer << "\n";
		cout << cnt;
	}

	return 0;
}