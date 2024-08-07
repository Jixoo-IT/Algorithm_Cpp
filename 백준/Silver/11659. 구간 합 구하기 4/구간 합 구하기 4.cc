#include <iostream>
using namespace std;

int S[100001];
int A[100001];

int get_partial_sum(int l, int r) {
	return S[r] - S[l - 1];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	int n, m, l, r;
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
		S[i] = S[i - 1] + A[i];
	}

	while (m--) {
		cin >> l >> r;
		cout << get_partial_sum(l, r) << "\n";
	}

	return 0;
}