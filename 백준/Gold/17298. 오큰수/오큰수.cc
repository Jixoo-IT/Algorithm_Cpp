#include <iostream>
#include <stack>
using namespace std;

int n;
int arr[1000001];
int NGE[1000001];
stack<int> s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		while (!s.empty() && s.top() <= arr[i]) {
			s.pop();
		}

		if (s.empty()) {
			NGE[i] = -1;
		}
		else {
			NGE[i] = s.top();
		}
		
		s.push(arr[i]);	
	}
	
	for (int i = 0; i < n; i++) {
		cout << NGE[i] << " ";
	}

	return 0;
}