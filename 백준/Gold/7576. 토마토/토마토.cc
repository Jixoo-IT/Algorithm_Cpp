#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};
int m, n, mx = -1e9, arr[1004][1004];
bool flag;
queue<pair<int, int>> q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr[i][j];

            if (arr[i][j] == 0) flag = 1;
        }
    }

    if (flag == 0) {
        cout << flag;
        return 0;
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (arr[i][j] == 1){
                q.push({i, j});
            }
        }
    }

    while (q.size()){
        auto[y, x] = q.front();
        q.pop();

        for (int i=0; i<4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (arr[ny][nx] == 0){
                arr[ny][nx] = arr[y][x] + 1;
                q.push({ny, nx});

                mx = max(arr[ny][nx], mx);
            }
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (arr[i][j] == 0){
                cout << -1;
                return 0;
            }
        }
    }

    cout << mx - 1;
    return 0;
}