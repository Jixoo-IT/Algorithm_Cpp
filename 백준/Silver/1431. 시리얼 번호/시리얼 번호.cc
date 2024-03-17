#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct serial {		// vector 구조체 생성
	string str;
	int jarisu = 0, length = 0;
};

bool compare(serial a, serial b) {	// (주의) a.str 뒤에 괄호 없음
	if (a.length == b.length && a.jarisu == b.jarisu) {	// 길이와 자릿수가 모두 같다면,
		return a.str < b.str;	// 사전 순대로(아스키코드 순)
	}
	else if (a.length == b.length) {	// 길이만 같다면,
		return a.jarisu < b.jarisu;	// 자릿수를 오름차순으로
	}
	else {
		return a.length < b.length;	// 길이 순으로
	}
}

int main() {
	int n, j = 0, l;
	string s;
	vector<serial> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;
		l = s.length();

		serial code;    // 구조체의 이름 설정
		code.str = s;    // 구조체의 각 값에 입력받은 값 저장
		code.length = l;
		
		for (int k = 0; k < s.length(); k++) {	// 아스키코드 이용해서 자릿수 구하고 저장
			if (0 <= (s[k] - 48) && (s[k] - 48) <= 9) {
				j += (s[k] - 48);
			}
		}
		code.jarisu = j;

		j = 0;	// 꼭 자릿수 초기화시켜줘야 함

		v.push_back({ code.str, code.jarisu, code.length });    // vector에 붙임
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << v[i].str << "\n";
	}

	return 0;
}
