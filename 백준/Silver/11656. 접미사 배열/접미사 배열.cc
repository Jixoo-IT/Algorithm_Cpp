#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s;
	vector<string> v;
	cin >> s;

	// 모든 접미사를 찾아 vector에 저장 - 문자열을 추출하는 substr 이용
	for (int i = 0; i < s.length(); i++) {
		v.push_back(s.substr(i));
	}

	// 벡터를 사전 순으로 정렬
	sort(v.begin(), v.end());

	for (int i = 0; i < s.length(); i++) {
		cout << v.at(i) << "\n";
	}

	return 0;
}