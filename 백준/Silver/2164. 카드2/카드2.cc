#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n;
	queue<int> q;
	cin >> n;

	for (int i = 1; i <= n; i++) {	// 숫자 순으로 queue에 넣기
		q.push(i);
	}

	while(!q.empty()) {	// queue가 비면(q.empty() == 1) while문 탈출
		if (q.size() == 1) {
			cout << q.back();
			break;
		}
		
		q.pop();

		if (q.size() == 1) {
			cout << q.back();
			break;
		}

		q.push(q.front());
		q.pop();

		if (q.size() == 1) {
			cout << q.back();
			break;
		}
	}

	return 0;
}