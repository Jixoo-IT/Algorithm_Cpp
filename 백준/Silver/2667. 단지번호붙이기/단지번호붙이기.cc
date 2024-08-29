#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int n;
int map[26][26];
bool visited[26][26] = { 0, };
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
vector<int> result;

void bfs(int startX, int startY) {
	queue<pair<int, int>> q;

	q.push({startX, startY});
	visited[startX][startY] = true;

	int cnt = 0;
	cnt++;

	while (!q.empty()) {
		int a = q.front().first;		// auto [x, y] = q.front();
		int b = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < n && map[nx][ny] == 1 && visited[nx][ny] == false) {
				q.push({ nx, ny });
				visited[nx][ny] = true;
				cnt++;
			}
		}
	}
	result.push_back(cnt);
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	for (int i = 0; i < n; i++)	{
		for (int j = 0; j < n; j++)	{
			if (visited[i][j] == false && map[i][j] == 1) {
				bfs(i, j);
			}
		}
	}

	sort(result.begin(), result.end());
	cout << result.size() << '\n';

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}

	return 0;
}