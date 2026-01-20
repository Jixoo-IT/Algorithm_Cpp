#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};
int m, n, k, cnt, arr[104][104], visited[104][104];
int a, b, c, d;
vector<int> ans;

void dfs(int y, int x){
    visited[y][x] = 1;
    cnt++;

    for (int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= m || nx < 0 || nx >= n) continue;
        if (!arr[ny][nx] && !visited[ny][nx]){
            dfs(ny, nx);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n >> k;

    while(k--){
        cin >> a >> b >> c >> d;
        for (int i=b; i<d; i++){
            for (int j=a; j<c; j++){
                arr[i][j] = 1;
            }
        }
    }

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (!arr[i][j] && !visited[i][j]){
                cnt = 0;
                dfs(i, j);
                ans.push_back(cnt);
            }
        }
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    
    for (auto a: ans){
        cout << a << " ";
    }
    
    return 0;
}