#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};
int n, m, t, cnt;
int arr[104][104], visited[104][104];
vector<int> v;

void dfs(int y, int x){
    for(int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
        if (visited[ny][nx]) continue;

        if (arr[ny][nx] == 0){
            visited[ny][nx] = 1;
            dfs(ny, nx);
        }

        if (arr[ny][nx] == 1){
            visited[ny][nx] = 1;
            arr[ny][nx] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    while(1){
        cnt = 0;
        memset(visited, 0, sizeof(visited));

        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (arr[i][j] == 1){
                    cnt++;
                }
            }
        }

        if (cnt == 0) break;
        v.push_back(cnt);
        
        visited[0][0] = 1;
        dfs(0, 0);
        t++;
    }

    cout << t << "\n" << v[v.size() - 1];
    return 0;
}