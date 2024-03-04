#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {		// ��������
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

	stable_sort(v.begin(), v.end(), compare);		// sort�� �ϸ� ���� -> stable_sort�� �ϴϱ� �ذ� �������� �𸣰���!

	for (int i = 0; i < v.size(); i++) {
		cout << v.at(i).first << ' ' << v.at(i).second << "\n";		// ������ index�� �ҷ����� �� ���� ��� v[i].first , v.at(i).second
	}


	return 0;
}