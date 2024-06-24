#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int n, m;
string str;
map<string, int> num;		// 입력이 문자인 경우에 사용
string name[100001];		// 입력이 숫자인 경우에 사용

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> str;
		num.insert({ str, i });		// num.inset(make_pair(name[i], i))
		name[i] = str;
	}

	for (int i = 0; i < m; i++) {
		cin >> str;

		if (isdigit(str[0]) != 0) {		// isdigit == 0: 문자 | isdigit != 0: 숫자
			cout << name[stoi(str) - 1] << "\n";		// 입력값: 숫자
		}
		else {
			cout << num.find(str)->second + 1 << "\n";		// 입력값: 문자
		}
	}
	
	return 0;
}
