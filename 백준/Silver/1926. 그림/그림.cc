#include <iostream>
#include <queue>
using namespace std;

int board[502][502];
bool visit[502][502];

int n, m;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	int mx = 0;		// 그림 넓이의 최댓값
	int num = 0;		// 그림의 수

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 0 || visit[i][j] == 1) {		// 해당 칸이 색칠이 안된 부분(0)이거나, 이미 방문했을 경우 넘어감
				continue;
			}
			num++;
			queue<pair<int, int>> q;
			visit[i][j] = 1;
			q.push({ i,j });
			int area = 0;

			while (!q.empty()) {
				area++;
				pair<int, int> cur = q.front();
				q.pop();

				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
						continue;
					}

					if (visit[nx][ny] == 1 || board[nx][ny] != 1) {
						continue;
					}

					visit[nx][ny] = 1;
					q.push({ nx, ny });
				}
			}
			mx = max(mx, area);
		}
	}
	cout << num << '\n' << mx;

	return 0;
}