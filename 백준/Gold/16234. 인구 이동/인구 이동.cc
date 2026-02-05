#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};
int n, l, r, sum, cnt;
int arr[54][54], visited[54][54];
vector<pair<int, int>> v;

void dfs(int y, int x){
    for (int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny<0 || ny>=n || nx<0 || nx>=n) continue;
        if (visited[ny][nx]) continue;

        int diff = abs(arr[ny][nx] - arr[y][x]);

        if (diff >= l && diff <= r){
            visited[ny][nx] = 1;
            v.push_back({ny, nx});
            sum += arr[ny][nx];

            dfs(ny, nx);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> l >> r;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    while(1){
        memset(visited, 0, sizeof(visited));
        bool flag = 0;

        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (!visited[i][j]){
                    v.clear();
                    visited[i][j] = 1;
                    v.push_back({i, j});
                    sum = arr[i][j];

                    dfs(i, j);

                    if (v.size() > 1){
                        flag = 1;
                        int avg = sum / v.size();
                        for (auto a: v){
                            arr[a.first][a.second] = avg;
                        }
                    }
                }
            }
        }
        if (!flag) break;
        else cnt++;
    }

    cout << cnt;
    return 0;
}