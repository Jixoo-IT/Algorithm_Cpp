#include <iostream>
using namespace std;

int n;
long long int arr[100001];
long long int resA, resB;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int left = 0;
	int right = n - 1;

	int resLiquid = abs(arr[left] + arr[right]);
	resA = arr[left];
	resB = arr[right];

	while (left < right) {
		int tmp = arr[left] + arr[right];
		if (abs(tmp) < resLiquid) {
			resLiquid = abs(tmp);
			resA = arr[left];
			resB = arr[right];
		}

		if (tmp < 0) {
			left++;
		}
		else {
			right--;
		}
	}

	cout << resA << " " << resB << "\n";
}