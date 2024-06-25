#include <iostream>
#include <algorithm>
using namespace std;

int T, m, n, k, x, y, answer;
int field[50][50];
int dirX[4] = { 0, 0, -1, 1 };		// 좌, 우
int dirY[4] = { 1, -1, 0, 0 };		// 상, 하

void dfs(int x, int y) {
	field[x][y] = 0;		// 방문했으니, 다시 배추를 0으로
	for (int i = 0; i < 4; i++) {
		int newX = x + dirX[i];
		int newY = y + dirY[i];
		
		if (newX < 0 || newY < 0 || newX >= m || newY >= n) {		// 상하좌우를 했을 때, (0, 0)이라면 map을 벗어나게 됨. ex) (-1, 0)
			continue;
		}

		if(field[newX][newY] == 1) {		// 상하좌우에 배추가 있다면, 그 위치에서 다시 dfs 탐색
			dfs(newX, newY);
		}
	}
}

int main() {
	cin >> T;

	for (int h = 0; h < T; h++) {
		cin >> m >> n >> k;		// m: 배추밭의 가로 길이, n: 배추밭의 세로 길이

		for (int i = 0; i < k; i++) {		// k: 배추가 심어진 위치의 개수
			cin >> x >> y;
			field[x][y] = 1;
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (field[i][j] == 1) {
					dfs(i, j);
					answer++;
				}
			}
		}

		cout << answer << "\n";

		answer = 0;

		for (int i = 0; i < m; i++) {		// map 초기화
			fill(field[i], field[i] + n, 0);
		}
	}
	return 0;
}