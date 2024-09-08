#include <iostream>
#include <stack>
using namespace std;

stack <int> s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, h;
	long long ans = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> h;

		if (s.empty()) {
			s.push(h);
		}

		while (!s.empty() && s.top() <= h) {
				s.pop();
		}

		ans += s.size();

		s.push(h);
	}

	cout << ans;
	return 0;
}