#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string n, num;
	cin >> n;

	int answer = 0;
	bool isMinus = false;

	for (int i = 0; i <= n.size(); i++) {
		if (n[i] == '+' || n[i] == '-' || i == n.size()) {		// 1. '+', '-' 부호를 만났거나, 식이 끝났을 때
			
			if (isMinus == true) {		// 만약, 부호가 '-'였다면 숫자를 빼줌
				answer -= stoi(num);
				num = "";		// 사용한 숫자 공백으로 초기화
			}
			else {		// 부호가 '+'이거나, 식이 끝나는 경우에는 숫자 더함
				answer += stoi(num);
				num = "";		// 사용한 숫자 공백으로 초기화
			}
		}
		else {		// 2. 기호가 아닌 경우 (숫자인 경우)
			num += n[i];		// 문자열 형태인 num에 숫자를 저장
		}

		if (n[i] == '-') {		// 3. '-'를 만난 경우, 이후의 숫자는 모두 빼주어야하므로 isMinus == True로 함
			isMinus = true;
		}
	}
	cout << answer;

	return 0;
}