#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, num;
	priority_queue<int> pq;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;

		if (pq.empty() && num == 0) {
			cout << "0" << "\n";
		}
		else if (num == 0) {
			cout << pq.top() << "\n";	// pq.top(): 우선순위가 높은 원소 반환, q.front(): 큐 제일 앞에 있는 원소를 반환
			pq.pop();
		}
		else {
			pq.push(num);
		}
	}

	return 0;
}