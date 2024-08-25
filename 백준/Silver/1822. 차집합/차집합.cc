#include <iostream>
#include <set>
using namespace std;

// set 사용
int a, b, setA, setB;
set<int> s;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b;
	set<int> s;

	for (int i = 0; i < a; i++) {
		cin >> setA;
		s.insert(setA);
	}

	for (int i = 0; i < b; i++) {
		cin >> setB;

		if (s.find(setB) == s.end()) {		// 원소 setB가 없다면, s.end()와 같은 반복자를 반환하므로
			continue;
		}
		else {
			s.erase(setB);
		}
	}

	cout << s.size() << "\n";

	for (auto it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}