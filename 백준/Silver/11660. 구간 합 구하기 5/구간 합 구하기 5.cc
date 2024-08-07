#include <iostream>
using namespace std;

// 2차원 누적합
long long S[1025][1025];
long long A[1025][1025];

int get_partial_sum(int a, int b, int c, int d) {
	return S[c][d] - S[a - 1][d] - S[c][b - 1] + S[a - 1][b - 1];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> A[i][j];
			S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + A[i][j];
		}
	}

	while (m--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << get_partial_sum(x1, y1, x2, y2) << "\n";
	}

	return 0;
}