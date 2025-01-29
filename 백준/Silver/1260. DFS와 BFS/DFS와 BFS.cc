#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

vector<int> v[1001];	// vector를 이용해 인접 리스트 구현
int n, m, startNode;

bool cmp(int a, int b) {
	return a > b;
}

void dfs() {		// dfs - 스택, 재귀함수를 이용 | 이외에는 bfs와 코드 같음
	vector<bool>visited(n + 1);
	stack<int> s;
	s.push(startNode);

	while (!s.empty()) {
		int cur = s.top();
		s.pop();
		if (!visited[cur]) {
			cout << cur << " ";
		}
		visited[cur] = true;
		for (auto a : v[cur]) {
			if (!visited[a]) {
				s.push(a);
			}
		}
	}
}

void bfs() {
	vector<bool>visited(n + 1);		// bfs - queue 이용
	queue<int> q;
	q.push(startNode);

	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		if (!visited[cur]) {
			cout << cur << " ";
		}
		visited[cur] = true;
		for (auto a : v[cur]) {
			if (!visited[a]) {
				q.push(a);
			}
		}
	}

}


int main() {
	cin >> n >> m >> startNode;

	int a, b;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		sort(v[i].begin(), v[i].end(), cmp);
	}

	dfs();
	cout << endl;

	for (int i = 1; i <= n; i++) {
		sort(v[i].begin(), v[i].end());
	}

	bfs();

	return 0;
}