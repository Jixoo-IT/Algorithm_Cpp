#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
#include <cstring>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};
int arr[52][52], visited[52][52];
int t, n, m, k, y, x;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;

    while(t--){
        memset(arr, 0, sizeof(arr));
        memset(visited, 0, sizeof(visited));
        int cnt = 0;

        cin >> m >> n >> k;

        while (k--){
            cin >> x >> y;
            arr[y][x] = 1;      //[세로][가로]
        }

        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (arr[i][j] == 1 && visited[i][j] == 0){
                    queue<pair<int, int>> q;
                    visited[i][j] = 1;
                    q.push({i, j});

                    while(q.size()){
                        tie(y, x) = q.front();
                        q.pop();

                        for (int k=0; k<4; k++){
                            int ny = y + dy[k];
                            int nx = x + dx[k];

                            if (ny < 0 || ny >= n || nx < 0 || nx >= m || arr[ny][nx] == 0) continue;
                            if (visited[ny][nx]) continue;

                            visited[ny][nx] = 1;
                            q.push({ny, nx});
                        }
                    }
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}