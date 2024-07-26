#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

struct A {
	int data;
	int pos;
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, L;

	cin >> N >> L;
	vector<int> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	deque<A> dq;

	for (int i = 0; i < N; i++) {
		if (!dq.empty() && i == dq.front().pos + L) {		// 맨 앞의 빠져야하는 수는 pop_front()를 이용해 삭제
			dq.pop_front();
		}
		while (!dq.empty() && dq.back().data > arr[i]) {		// arr[i] 보다 큰 deque 안의 원소는 pop_back()으로 삭제
			dq.pop_back();
		}
		dq.push_back({ arr[i], i });		// arr[i] 추가 
		cout << dq.front().data << " ";		// deque의 맨앞의 원소 == 구간에서의 최솟값
	}

	return 0;
}