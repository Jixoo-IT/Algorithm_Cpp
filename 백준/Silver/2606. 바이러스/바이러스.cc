#include <bits/stdc++.h>
using namespace std;
int n, m, cnt;
vector<int> v[105];
int visited[105];

void DFS(int x){
    visited[x] = 1;
    for (int i: v[x]){
        if (!visited[i]){
            cnt++;
            DFS(i); 
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for (int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    DFS(1);

    cout << cnt;
    return 0;
}