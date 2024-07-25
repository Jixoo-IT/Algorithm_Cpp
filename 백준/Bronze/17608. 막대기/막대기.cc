#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, h, cnt = 0, max = -1;
	vector<int> v;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> h;
		v.push_back(h);
	}

	for (int i = n - 1; i >= 0; i--) {
		if (v[i] > max) {
			cnt++;
			max = v[i];
		}
	}
	cout << cnt;

	return 0;
}