#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int w, h;
int board[51][51];
bool visit[51][51];
int dh[8] = { 1, 0, -1, 0, 1, 1, -1, -1 };
int dw[8] = { 0, 1, 0, -1, 1, -1, 1, -1 };
int cnt = 0;

void bfs(int cur_h, int cur_w) {
	queue<pair<int, int>> q;
	q.push(make_pair(cur_h, cur_w));

	visit[cur_h][cur_w] = true;

	while (!q.empty()) {
		cur_h = q.front().first;
		cur_w = q.front().second;
		q.pop();

		for (int i = 0; i < 8; i++) {
			int nh = cur_h + dh[i];
			int nw = cur_w + dw[i];

			if (nh >= 0 && nw >= 0 && nh < h && nw < w) {
				if (board[nh][nw] && !visit[nh][nw]) {
					visit[nh][nw] = true;
					q.push(make_pair(nh, nw));
				}
			}
		}
	}
}

void dfs(int cur_h, int cur_w) {
	visit[cur_h][cur_h] = true;

	for (int i = 0; i < 8; i++) {
		int nh = cur_h + dh[i];
		int nw = cur_w + dw[i];

		if (nh >= 0 && nw >= 0 && nh < h && nw < w) {
			if (board[nh][nw] && !visit[nh][nw]) {
				visit[nh][nw] = true;
				dfs(nh, nw);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (1) {
		cin >> w >> h;

		if (w == 0 && h == 0) {
			break;
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> board[i][j];
			}
		}
		
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (board[i][j] && !visit[i][j]) {
					cnt++;
					bfs(i, j);
					// dfs(i. j);
				}
			}
		}
		cout << cnt << "\n";

		memset(board, false, sizeof(board));
		memset(visit, false, sizeof(visit));
		cnt = 0;
	}
	return 0;
}