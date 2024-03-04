#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {		// 오름차순
	return a.first < b.first;
}

int main() {
	int N;
	pair<int, string> arr;
	vector<pair<int, string>> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr.first >> arr.second;

		v.push_back(arr);
	}

	stable_sort(v.begin(), v.end(), compare);		// sort로 하면 오류 -> stable_sort로 하니까 해결 왜인지는 모르겠음!

	for (int i = 0; i < v.size(); i++) {
		cout << v.at(i).first << ' ' << v.at(i).second << "\n";		// 백터의 index를 불러오는 두 가지 방법 v[i].first , v.at(i).second
	}


	return 0;
}