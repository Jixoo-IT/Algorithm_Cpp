#include <iostream>
#include <set>
using namespace std;

// set 사용
int n, cnt = 0;
string name;
set<string> s;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	while (n--) {
		cin >> name;

		if (name == "ENTER") {
			cnt += s.size();
			s.clear();
		}
		else {
			if (s.find(name) == s.end()) {		// set에 name 원소가 없는 경우, set에 원소 추가
				s.insert(name);
			}
		}
	}

	cout << cnt + s.size();
	return 0;
}