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
	if (st.size() == 4 || st.size() == 6) {		// .size(), 괄호 주의
		for (int i = 0; i < st.size(); i++) {
			if (isdigit(st[i] == false)) {	// 알파벳 ->0, false = 0, 숫자 -> 0이 아닌 수가 나옴.
				answer = false;
				break;
			}
			else {
				answer = true;
			}
		}
	}
	else {
		answer = false;
	}

	return answer;
}

int main() {
	P5 p;
	cout << p.solution("a234") << endl;
	cout << p.solution("1234") << endl;
	return 0;
}