#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	bool arr[1000001] = { 0, };		// 0이면 소수

	arr[0] = 1;		// 0과 1은 소수가 아니므로
	arr[1] = 1;

	for (int i = 2; i * i <= m; i++) {
		if (arr[i] == 1) {
			continue;
		}
		else {
			for (int j = 2; j * i <= m; j++) {
				arr[i * j] = 1;
			}
		}
	}

	for (int i = n; i <= m; i++) {
		if (arr[i] == 0) {
			cout << i << "\n";
		}
	}

	return 0;
}