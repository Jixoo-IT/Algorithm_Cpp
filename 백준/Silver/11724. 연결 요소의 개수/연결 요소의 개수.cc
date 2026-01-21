#include <bits/stdc++.h>
using namespace std;
int n, m, u, v, cnt;
vector<int> adj[1004];
int visited[1004];

void DFS(int x){
    visited[x] = 1;

    for (int i: adj[x]){
        if (!visited[i]){
            DFS(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    while(m--){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i=1; i<=n; i++){
        if (!visited[i]){
            DFS(i);
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}