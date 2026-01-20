#include <bits/stdc++.h>
using namespace std;
int a, b, n, m, v;
vector<int> adj[1004];
int visited[1004];

void DFS(int x){
    visited[x] = 1;
    cout << x << " ";
    for (int i: adj[x]){
        if (!visited[i]){
            DFS(i);
        }
    }
}

void BFS(int x){
    queue<int> q;
    visited[x] = 1;
    q.push(x);

    while (!q.empty()){
        int cur = q.front();
        q.pop();
        cout << cur << " ";

        for (int i: adj[cur]){
            if (!visited[i]){
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> v;

    while (m--){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i=1; i<=n; i++){
        sort(adj[i].begin(), adj[i].end());
    }

    DFS(v);
    cout << "\n";

    memset(visited, 0, sizeof(visited));
    BFS(v);

    return 0;
}