#include <bits/stdc++.h>
using namespace std;
int n, a, b, m, u, v;
int ans = -1;
vector<int> adj[104];
int visited[104];

void DFS(int x, int depth){
    visited[x] = 1;

    if (x == b){
        ans = depth;
        return;
    }

    for (int i: adj[x]){
        if (!visited[i]){
            DFS(i, depth + 1);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> a >> b >> m;

    while(m--){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    DFS(a, 0);
    cout << ans;

    return 0;
}