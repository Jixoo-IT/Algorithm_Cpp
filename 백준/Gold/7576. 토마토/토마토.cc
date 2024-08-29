#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <string>
using namespace std;

queue<pair<int, int>> q;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int n, m, result = 0;
int tomato[1001][1001];

void bfs(void) {
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            // 지도를 벗어나지 않고, 익지않았다면(0)
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && tomato[nx][ny] == 0) {
                tomato[nx][ny] = tomato[x][y] + 1;
                q.push({ nx, ny });
            }
        }
    }
}

int main() {
    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &tomato[i][j]);

            if (tomato[i][j] == 1) {
                q.push({ i, j });
            }
        }
    }

    bfs();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (tomato[i][j] == 0) {
                cout << "-1" << "\n";
                return 0;
            }
            if (result < tomato[i][j]) {
                result = tomato[i][j];
            }
        }
    }

    cout << result - 1 << "\n";
    return 0;
}
