#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};
int n, m, ans;
int arr[54][54], visited[54][54];
char c;

void bfs(int y, int x){
    memset(visited, 0, sizeof(visited));
    visited[y][x] = 1;
    queue<pair<int, int>> q;
    q.push({y, x});

    while(q.size()){
        tie(y, x) = q.front();
        q.pop();

        for (int i=0; i<4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (!arr[ny][nx] || visited[ny][nx]) continue;

            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
            
            ans = max(ans, visited[ny][nx]);
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> c;
            if (c == 'W') arr[i][j] = 0;
            else if(c == 'L') arr[i][j] = 1;
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (arr[i][j] == 1){
                bfs(i, j);
            }
        }
    }

    if (ans == 0) cout << 0;
    else cout << ans - 1;

    return 0;
}