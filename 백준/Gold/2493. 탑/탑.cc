#include <iostream>
#include <stack>
using namespace std;

stack<pair<int, int>> s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, t;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> t;
		
		while (!s.empty()) {
			if (s.top().second > t) {
				cout << s.top().first << " ";
				break;
			}
			s.pop();
		}
		
		if (s.empty()) {		// 스택이 비어있다면,
			cout << "0 ";
		}

		s.push(make_pair(i, t));
	}

	return 0;
}