#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int N;
int input[101][101];
int board[101][101];
bool visit[101][101];
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
queue<pair<int, int>> q;
vector<int> v;
int cnt = 0;

void bfs(int x, int y) {
	visit[x][y] = true;
	q.push(make_pair(x, y));

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && ny >= 0 && nx < N && ny < N) {
				if (board[nx][ny] && !visit[nx][ny]) {
					visit[nx][ny] = true;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
}

int main() {
	int maxH = -1;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> input[i][j];
			if (input[i][j] > maxH) {
				maxH = input[i][j];
			}
		}
	}

	for (int h = 1; h <= maxH; h++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (input[i][j] < h) {
					board[i][j] = 0;
				}
				else {
					board[i][j] = 1;
				}
			}
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (board[i][j] && !visit[i][j]) {
					cnt++;
					bfs(i, j);
				}
			}
		}
		v.push_back(cnt);

		memset(board, 0, sizeof(board));
		memset(visit, 0, sizeof(visit));
		cnt = 0;
	}

	int max = *max_element(v.begin(), v.end());
	cout << max;
}