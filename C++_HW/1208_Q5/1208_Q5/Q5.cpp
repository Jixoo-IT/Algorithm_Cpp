// Q5. ���ڿ� �ٷ�� �⺻

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
	if (st.size() == 4 || st.size() == 6) {		// .size(), ��ȣ ����
		for (int i = 0; i < st.size(); i++) {
			if (isdigit(st[i] == false)) {	// ���ĺ� ->0, false = 0, ���� -> 0�� �ƴ� ���� ����.
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