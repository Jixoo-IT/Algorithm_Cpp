#include <iostream>
#include <queue>
using namespace std;

int n, m, cnt = 0;
int arr[101][101];
bool visited[101] = { 0, };
queue<int> q;

void bfs(int v) {
	q.push(v);
	visited[v] = true;

	while (!q.empty()) {
		v = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (arr[v][i] && visited[i] == 0) {
				q.push(i);
				visited[i] = true;
				cnt++;
			}
		}
	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}

	bfs(1);
	cout << cnt;
	
	return 0;
}