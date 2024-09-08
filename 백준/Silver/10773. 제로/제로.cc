#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k, n;
	cin >> k;

	while (k--) {
		cin >> n;

		if (n == 0) {
			s.pop();
		}
		else {
			s.push(n);
		}
	}

	int ans = 0;

	while (s.empty() == 0) {
		ans += s.top();
		s.pop();
	}

	cout << ans << "\n";
	return 0;
}