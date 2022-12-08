// Q5. 문자열 다루기 기본

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class P5 {
	string st;
	bool answer;
public:
	P5() { st = ""; answer = true; }
	bool solution(string s);
};

bool P5::solution(string s) {
	st = s;
	if (st.size() != 4 && st.size() != 6) {		// .size(), 괄호 주의
		return false;
	}

	for (int i = 0; i < st.size(); i++) {
		if (isdigit(st[i]) == false) {	// isdigit() '숫자 판별 함수', 알파벳 == 0, 숫자 != 0
			return false;				// isdigit() 알파벳 == 0, 숫자 != 0
		}
	}

	return true;
}

int main() {
	P5 p;
	cout << p.solution("bd3457") << endl;
	cout << p.solution("1234") << endl;
	return 0;
}