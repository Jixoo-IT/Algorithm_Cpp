#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 완전 탐색
vector<int> a, b;

int main() {
	int t, n, m;
	cin >> t;

	while (t--) {
		cin >> n >> m;
		a = vector<int>(n);
		b = vector<int>(m);

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		int answer = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i] > b[j]) {
					answer++;
				}
				else {
					break;
				}
			}
		}
		cout << answer << "\n";
	}
	return 0;
}