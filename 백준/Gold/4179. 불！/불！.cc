#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};
int n, m, y, x, sy, sx;
int fireCheck[1004][1004], personCheck[1004][1004];
char arr[1004][1004];
queue<pair<int, int>> q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    fill(&fireCheck[0][0], &fireCheck[0][0] + 1004 * 1004, INF);

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr[i][j];

            if (arr[i][j] == 'F'){
                fireCheck[i][j] = 0;
                q.push({i, j});
            } else if (arr[i][j] == 'J'){
                sy = i;
                sx = j;
            }
        }
    }

    while (q.size()){
        tie(y, x) = q.front();
        q.pop();

        for (int i=0; i<4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || ny >= m) continue;
            if (arr[ny][nx] == '#' || fireCheck[ny][nx] != INF) continue;

            fireCheck[ny][nx] = fireCheck[y][x] + 1;
            q.push({ny, nx});
        }
    }

    personCheck[sy][sx] = 1;
    q.push({sy, sx});

    while(q.size()){
        tie(y, x) = q.front();
        q.pop();

        for (int i=0; i<4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m){
                cout << personCheck[y][x];
                return 0;
            }

            if (arr[ny][nx] == '#' || personCheck[ny][nx] != 0) continue;
            if (personCheck[y][x] >= fireCheck[ny][nx]) continue;

            personCheck[ny][nx] = personCheck[y][x] + 1;
            q.push({ny, nx});
        }
    }

    cout << "IMPOSSIBLE" << "\n";
    return 0;
}