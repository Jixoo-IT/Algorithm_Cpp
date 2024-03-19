#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, num, k;
	vector<int> v;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end(), greater<int>());	// less<int>() 오름차순 / greater<int>() 내림차순 

	cout << v[k - 1];

	return 0;
}