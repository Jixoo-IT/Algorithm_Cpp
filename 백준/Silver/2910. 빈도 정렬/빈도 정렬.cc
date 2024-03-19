#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<int, int> index;

// 입력받은 값, 빈도수, index 세 값을 저장해야함.
// index를 알아야 기존 순서대로 정렬이 가능하기 때문...

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {	// 2. 빈도수가 같다면
		return index[a.first] < index[b.first];	// 우선 등장한 순으로
	}
	else {
		return a.second > b.second;    // 1. 빈도수로 정렬
	}
}

int main() {
	int n, num, c;
	cin >> n >> c;

	map<int, int> m;

	for (int i = 1; i <= n; i++) {
		cin >> num;

		if (index[num] == 0) {	// num에 대한 index가 저장 안 된 경우만! 만약, 계속 index 업데이트 시킨다면 1 3 1 3 3 1이면 1부터 나와야하는데 마지막 원소가 1이라 index가 5가 돼서 정확히 도출 X
			index[num] = i;
		}

		if (m.find(num) == m.end()) {	// 일치하는 수가 없다면,
			m[num] = { 1 };	// 빈도수 = 1
		}
		else {	// 일치하는 수가 있을 때마다,
			m[num]++;	// 빈도수++
		}
	}
	// map을 vector로 변환
	vector<pair<int, int>> v(m.begin(), m.end());	// num, frequency

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].second; j++) {
			cout << v[i].first << " ";
		}
	}

	return 0;
}

