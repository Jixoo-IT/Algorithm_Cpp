#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, int> m;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cout << fixed;		// 소수점 이하 자릿수 고정
	cout.precision(4);

	int n = 0;
	string str;

	while (getline(cin, str)) {		// EOF(End Of File), 띄어쓰기 없다면 while (cin >> input)
		n++;
		m[str]++;
	}

	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << (double) it->second / n * 100 << "\n";
	}

	return 0;
}