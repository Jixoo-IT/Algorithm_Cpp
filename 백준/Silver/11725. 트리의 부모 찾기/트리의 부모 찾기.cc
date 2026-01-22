#include <bits/stdc++.h>
using namespace std;
int n, a, b, visited[100004], parent[100004];
vector<int> adj[100004];

void DFS(int x){
    visited[x] = 1;

    for (int i: adj[x]){
        if (!visited[i]){
            parent[i] = x;
            DFS(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i=0; i<n-1; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    DFS(1);

    for (int i=2; i<=n; i++){
        cout << parent[i] << "\n";
    }
    return 0;
}