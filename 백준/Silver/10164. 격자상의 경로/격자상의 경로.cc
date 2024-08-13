#include <iostream>
using namespace std;

int route(int x, int y, int px, int py) {
	if (x == px && y == py) {		// 현재 좌표 (x, y)가 목표 좌표에 도달했다면,
		return 1;		// 1 반환
	}
	else if (x > px || y > py) {		// 현재 좌표 (x, y)가 목표 좌표를 벗어났다면,
		return 0;		// 0 반환
	}

	return route(x + 1, y, px, py) + route(x, y + 1, px, py);	// (재귀) 오른쪽으로 이동하거나, 아래로 이동하는 경우의 수를 더하기
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, k;
	cin >> n >> m >> k;

	if (k == 0) {
		cout << route(1, 1, n, m);
	}
	else {
		int h = (k - 1) / m;
		int w = (k - 1) % m;
		cout << route(1, 1, h + 1, w + 1) * route(h + 1, w + 1, n, m);
	}

	return 0;
}