#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> chair;

int getNum(int x, int y, int n) {
	int arr[4];

	if (n == 1) {
		return chair[x][y];
	}
	
	arr[0] = getNum(x, y, n / 2);
	arr[1] = getNum(x + n / 2, y, n / 2);
	arr[2] = getNum(x, y + n / 2, n / 2);
	arr[3] = getNum(x + n / 2, y + n / 2, n / 2);

	sort(arr, arr + 4);

	return arr[1];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	chair.resize(n, vector<int>(n));
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> chair[i][j];
		}
	}

	cout << getNum(0, 0, n) << "\n";

	return 0;
}