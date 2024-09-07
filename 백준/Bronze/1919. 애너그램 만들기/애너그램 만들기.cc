#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int alph1[26] = {};
	int alph2[26] = {};

	string s1, s2;
	
	cin >> s1 >> s2;

	for (auto e : s1) {
		alph1[e - 'a']++;
	}

	for (auto e : s2) {
		alph2[e - 'a']++;
	}

	/* 
	for (int i = 0; i < sl.size(); i++) {
		alph2[s1[i] - 'a']++;
	}
	*/

	int answer = 0;

	for (int i = 0; i < 26; i++) {
		if (alph1[i] != alph2[i]) {
			answer += abs(alph1[i] - alph2[i]);
		}
	}

	cout << answer;
	return 0;
}