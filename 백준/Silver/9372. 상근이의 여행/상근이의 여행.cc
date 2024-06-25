#include <iostream>
using namespace std;

// 모든 Node가 연결된다 + 가중치가 없다 = MST
// MST의 조건: 간선의 개수 = Node - 1

int main() {
	int T, n, m;		// T: 테스크 케이스 수, n: 방문할 국가 수, m: 비행기 종류
	int a, b;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n >> m;
		for (int i = 0; i < m; i++) {
			cin >> a >> b;
		}
		cout << n - 1 << "\n";
	}
	return 0;
}