#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, max = -1, cnt = 0;

	long long num;
	vector<long long> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());	// 오름차순으로 정렬

	long long answer = v[0];	// long long으로 선언하지 않으면, 수가 커 틀림

	for (int i = 0; i < n - 1; i++) {	// 가장 많은 수 찾기 (max, cnt 사용)
		if (v[i] == v[i + 1]) {
			cnt++;
			if (cnt > max) {
				max = cnt;
				answer = v[i];
			}
		}
		else {
			cnt = 0;
		}
	}

	cout << answer;

	return 0;
}