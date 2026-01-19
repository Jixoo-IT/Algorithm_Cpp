#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};
int n, ans, arr[104][104], visited[104][104];

void dfs(int y, int x, int h){
    visited[y][x] = 1;
    for (int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
        if (arr[ny][nx] > h && !visited[ny][nx]){
            dfs(ny, nx, h);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for (int h=0; h<101; h++){      // 아무 지역도 물에 잠기지 않을 수 있음
        memset(visited, 0, sizeof(visited));
        int cnt = 0;
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (arr[i][j] > h && !visited[i][j]){
                    dfs(i, j, h);
                    cnt++;
                }
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}