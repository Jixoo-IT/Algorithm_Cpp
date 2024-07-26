#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, num, k, cnt, sum = 0, answer= 1000001;
	vector<int> v;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> num;
		
		if (num == 1) {
			v.push_back(i);
		}
	}

	if (v.size() < k) {
		cout << "-1";

		return 0;		// 라이언 인형이 요구하는 개수 k보다 적으면 '-1'을 출력 후 종료
	}

	int st = 0, end = k - 1;
	for (int i = 0; i <= v.size() - k; i++) {
		sum = v[end] - v[st] + 1;
		answer = min(answer, sum);

		st++;
		end++;
	}

	cout << answer;

	return 0;
}