#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, st, en;
	vector<pair<int, int>> room;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> st >> en;
		room.push_back(make_pair(en, st));
	}

	sort(room.begin(), room.end());

	int time = room[0].first;
	int count = 1;

	for (int i = 1; i < n; i++) {
		if (room[i].second >= time) {
			count++;
			time = room[i].first;
		}
	}
	cout << count;

	return 0;
}