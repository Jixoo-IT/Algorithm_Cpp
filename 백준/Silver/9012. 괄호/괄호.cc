#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		string str, answer ="YES";
		cin >> str;

		stack<char> s;

		for (int j = 0; j < str.length(); j++) {
			// '(' 스택에 저장
			if (str[j] == '(') {
				s.push(str[j]);
			}
			// 1. 스택이 비어있지 않고 2. 스택의 top이 '('이고 3. ')'이라면, 스택 pop 하기, '('과 ')'이 짝이 맞으면 '('이 스택에서 pop됨.
			else if (!s.empty() && s.top() == '(' && str[j] == ')') {
				s.pop();
			}
			// 위에 해당되지 않으면 "NO" 출력
			else {
				answer = "NO";
				break;
			}
		}

		// ex) ( ( ( ( ) 의 경우에는, '('가 모두 pop되지 않을 수 있음. 따라서, for문을 다 돌았는데 스택이 비어있지 않다면 VPS가 아님.
		if (!s.empty()) {
			answer = "NO";
		}

		cout << answer << "\n";
	}

	return 0;
}