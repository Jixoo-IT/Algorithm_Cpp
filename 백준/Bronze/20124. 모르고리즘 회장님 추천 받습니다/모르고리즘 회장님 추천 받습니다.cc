#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {
	if (a.second == b.second) {	// 2. 점수가 같다면,
		return a.first < b.first;	// 이름이 사전 순으로 가장 앞선 사람
	}
	else {
		return a.second > b.second;	// 1. 점수가 가장 높은 사람
	}
}
int main() {
	int n, score;
	string name;
	vector<pair<string, int>> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> name >> score;
		v.push_back({ name, score });
	}

	sort(v.begin(), v.end(), compare);

	cout << v[0].first;	// first 뒤에 괄호 X

	return 0;
}