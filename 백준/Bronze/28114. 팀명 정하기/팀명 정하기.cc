#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// 구조체 벡터
struct info {
	string name;
	int problem;
};

// 사용자 지정 compare 함수 (sort, 정렬에 사용)
bool compare(info a, info b) {
	return a.problem > b.problem;
}

int main() {
	string n;
	int p, y;
	char c;

	vector<int> v;
	vector<info> v2;

	for (int i = 0; i < 3; i++) {
		cin >> p >> y >> n;

		v.push_back(y - 2000);		// 첫 번째 방법: 학번 순

		info s;

		s.name = n.substr(0, 1);
		s.problem = p;

		v2.push_back({ s.name, s.problem });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < 3; i++) {
		cout << to_string(v[i]);
	}

	cout << "\n";

	sort(v2.begin(), v2.end(), compare);

	for (int i = 0; i < 3; i++) {
		cout << v2[i].name;
	}
}