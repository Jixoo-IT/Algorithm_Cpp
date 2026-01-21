#include <iostream>
#include <queue>
using namespace std;

int n, k;
bool visit[100001];

void bfs(int a) {
    queue<pair<int, int>> q;

    q.push(make_pair(0, a));

    visit[a] = true; // 시작 위치를 방문 처리

    while (!q.empty()) {
        int cnt = q.front().first;
        int x = q.front().second;
        q.pop();

        if (x == k) {
            cout << cnt;
            return;
        }

        if (x + 1 < 100001 && !visit[x + 1]) {
            visit[x + 1] = true;
            q.push(make_pair(cnt + 1, x + 1));
        }

        if (x - 1 >= 0 && !visit[x - 1]) {
            visit[x - 1] = true;
            q.push(make_pair(cnt + 1, x - 1));
        }

        if (2 * x < 100001 && !visit[2 * x]) {
            visit[2 * x] = true;
            q.push(make_pair(cnt + 1, 2 * x));
        }
    }
}

int main() {
    cin >> n >> k;

    bfs(n);

    return 0;
}