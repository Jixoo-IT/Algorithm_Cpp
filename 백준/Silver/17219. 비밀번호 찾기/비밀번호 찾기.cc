#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	map<string, string> m;

	int N, M;
	cin >> N >> M;

	string site, pass;

	for (int i = 0; i < N; i++) {
		cin >> site >> pass;
		m.insert(make_pair(site, pass));
	}

	for (int i = 0; i < M; i++) {
		cin >> site;
		cout << m[site] << "\n";
	}

	return 0;
}