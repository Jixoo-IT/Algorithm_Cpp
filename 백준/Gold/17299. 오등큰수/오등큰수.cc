#include <iostream>
#include <stack>
using namespace std;

int n;
int arr[1000001];
int NGF[1000001];
int cnt[1000002];
stack<int> s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		cnt[arr[i]]++;
	}

	for (int i = n - 1; i >= 0; i--) {
		while (!s.empty() && cnt[s.top()] <= cnt[arr[i]]) {
			s.pop();
		}

		if (s.empty()) {
			NGF[i] = -1;
		}
		else {
			NGF[i] = s.top();
		}

		s.push(arr[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << NGF[i] << " ";
	}

	return 0;
}