#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string n;
	int b, answer = 0;
	cin >> n >> b;

	reverse(n.begin(), n.end());

	for (int i = 0; i < n.length(); i++) {
		if (n[i] >= '0' && n[i] <= '9') {
			answer += (pow(b, i) * (n[i] - '0'));	// pow 제곱 함수, b의 i제곱
		}
		else {
			answer += (pow(b, i) * (n[i] - 55));
		}
	}

	cout << answer;

	return 0;

}