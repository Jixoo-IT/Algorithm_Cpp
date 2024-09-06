#include <iostream>
#include <vector>
using namespace std;

// array
int arr[100001];
bool check[2000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cin >> x;

	for (int i = 0; i < n; i++) {
		if (x > arr[i] && check[x - arr[i]]) {
			cnt++;
		}
		else if (x > arr[i]) {
			check[arr[i]] = 1;
		}
	}

	cout << cnt;
	return 0;
}