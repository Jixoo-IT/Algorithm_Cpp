#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, k;
	queue<int> q;

	cin >> n >> k;
	for (int i = 1; i <= n; i++) {	// 큐에 1부터 n까지 넣기
		q.push(i);
	}
	
	cout << "<";

	while (q.empty() == 0) {
		for (int i = 1; i < k; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		
		if (q.size() >= 2) {
			cout << ", ";
		}
		q.pop();		// 이거 안 넣어서 실행이 안 끝나는 문제 발생했었음
	}
	cout << ">";
}