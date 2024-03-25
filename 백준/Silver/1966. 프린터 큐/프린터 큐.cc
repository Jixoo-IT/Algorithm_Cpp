#include <iostream>
#include <queue>
using namespace std;

int main() {
	int cnt = 0, T;
	int n, m, ipt;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cnt = 0;
		cin >> n >> m;
		
		queue<pair<int, int>> q;	// 이전에 for문 밖에 선언했으나, 그러면 이전 값이 저장되어 답이 다르게 출력됨.
		priority_queue<int> pq;

		for (int j = 0; j < n; j++) {
			cin >> ipt;
			q.push({ j, ipt });
			pq.push(ipt);
		}

		while (!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();

			if (pq.top() == value) {
				pq.pop();
				++cnt;		// cnt++는 후처리(후치)로 답이 정확하게 나오지 않는다.
				if (index == m) {
					cout << cnt << "\n";
					break;
				}
			}
			else {
				q.push({ index, value });
			}
		}
	}
	return 0;
}
