#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

struct compare {
	bool operator()(int a, int b) {
		if (abs(a) == abs(b)) {
			return a > b;	// sort 함수의 사용자 지정 compare 함수와 부호가 반대! 잊지 말자.
		}
		else {
			return abs(a) > abs(b);
		}
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, num;
	priority_queue<int, vector<int>, compare> pq;
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