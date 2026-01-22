#include <bits/stdc++.h>
using namespace std;
int n, p, root, target, cnt;
vector<int> adj[54];

void DFS(int u){
    int c = 0;

    for (int i: adj[u]){
        if (i == target) continue;

        DFS(i);
        c++;
    }
    
    if (c == 0){
        cnt++;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> p;
        
        if (p == -1){
            root = i;
        } else {
            adj[p].push_back(i);
        }
    }

    cin >> target;

    DFS(root);

    if (root == target) {
        cout << 0;
    } else {
        cout << cnt;
    }

    return 0;
}