#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};
int n, m, cnt, zone;
int arr[10][10], visited[10][10];
vector<pair<int, int>> ePos, vPos;

void dfs(int y, int x){
    for (int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
        if (visited[ny][nx] || arr[ny][nx] == 1) continue;

        visited[ny][nx] = 1;
        dfs(ny, nx);
    }
}

void checkArea(){
    memset(visited, 0, sizeof(visited));

    for (auto a: vPos){
        visited[a.first][a.second] = 1;
        dfs(a.first, a.second);
    }

    cnt = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (!visited[i][j] && arr[i][j] == 0){
                cnt++;
            }
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

            if (arr[i][j] == 0) ePos.push_back({i, j});
            if (arr[i][j] == 2) vPos.push_back({i, j});
        }
    }

    for (int i=0; i<ePos.size(); i++){
        for (int j=0; j<i; j++){
            for (int k=0; k<j; k++){
                arr[ePos[i].first][ePos[i].second] = 1;
                arr[ePos[j].first][ePos[j].second] = 1;
                arr[ePos[k].first][ePos[k].second] = 1;

                checkArea();
                zone = max(zone, cnt);

                arr[ePos[i].first][ePos[i].second] = 0;
                arr[ePos[j].first][ePos[j].second] = 0;
                arr[ePos[k].first][ePos[k].second] = 0;
            }
        }
    }

    cout << zone;
    return 0;
}