#include <iostream>
#include <vector>
using namespace std;

long long S[301][301];

int get_partial_sum(int a, int b, int c, int d) {
	return S[c][d] - S[a - 1][d] - S[c][b - 1] + S[a - 1][b - 1];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m, k;
	cin >> n >> m;

	// vector<vector<int>> S(n, vector<int>(m));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> S[i][j];
			S[i][j] = S[i][j] + S[i][j - 1] + S[i - 1][j] - S[i - 1][j - 1];
		}
	}

	cin >> k;

	while (k--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		cout << get_partial_sum(a, b, c, d) << "\n";
	}

	return 0;
}