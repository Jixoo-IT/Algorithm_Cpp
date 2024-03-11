#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.size() != b.size()) {
		return a.size() < b.size();
	}
	else {
		return a < b;
	}
}


int main() {
	int n;
	string str;
	string arr[20001];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n, compare);


	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[i + 1]) {
			continue;
		}
		cout << arr[i] << "\n";
	}

	return 0;
}