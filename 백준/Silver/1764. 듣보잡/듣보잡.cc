// binary_search 사용 | O(logn)
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string hearname, seename;
	vector<string> hearv, answerv;
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> hearname;
		hearv.push_back(hearname);
	}

	sort(hearv.begin(), hearv.end());

	for (int i = 0; i < m; i++) {
		cin >> seename;
		if (binary_search(hearv.begin(), hearv.end(), seename)) {
			answerv.push_back(seename);
		}
	}
	
	sort(answerv.begin(), answerv.end());

	cout << answerv.size() << "\n";

	for (auto a : answerv) {
		cout << a << "\n";
	}

	return 0;
}



/* 시간초과_이중 for문 | O(n^2)

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	string hearname, seename;
	vector<string> hearv, seev, answerv;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> hearname;
		hearv.push_back(hearname);
	}

	for (int i = 0; i < m; i++) {
		cin >> seename;
		seev.push_back(seename);
	}
	
	sort(hearv.begin(), hearv.end());
	sort(seev.begin(), seev.end());


	for (int i = 0; i < n; i++) {
		for (int j = i; j < m; j++) {
			if (hearv[i] == seev[j]) {
				answerv.push_back(hearv[i]);
			}
		}
	}

	cout << answerv.size() << "\n";
	
	for (auto a : answerv) {
		cout << a << "\n";
	}
	
	return 0;
}
*/