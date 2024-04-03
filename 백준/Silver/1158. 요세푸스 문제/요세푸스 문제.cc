#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k;
	queue<int> q;

	cin >> n >> k;

	cout << "<";

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (!q.empty()) {
		for (int i = 1; i < k; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();

		if (q.size() >= 2) {
			cout << ", ";
		}
		q.pop();
	}
	cout << ">";

	return 0;
}