#include <iostream>
using namespace std;

// 조합 공식 이용
int bridge(int n, int m) {
	int temp = 1;
	int answer = 1;

	for (int i = m; i > (m - n); i--) {
		answer *= i;
		answer /= temp++;
	}
	return answer;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t, n, m;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> m;

		cout << bridge(n, m) << "\n";
	}
	return 0;
}