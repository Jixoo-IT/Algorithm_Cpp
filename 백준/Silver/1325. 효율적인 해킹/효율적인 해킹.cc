#include <bits/stdc++.h>
using namespace std;
int a, b, n, m, mx;
int visited[10004], ans[10004];
vector<int> v[10004];

int dfs(int x){
    visited[x] = 1;
    int cnt = 1;

    for (auto i: v[x]){
        if (visited[i]) continue;
        cnt += dfs(i);
    }

    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    while(m--){
        cin >> a >> b;
        v[b].push_back(a);
    }

    for (int i=1; i<=n; i++){
        memset(visited, 0, sizeof(visited));
        ans[i] = dfs(i);
        mx = max(mx, ans[i]);
    }

    for (int i=1; i<=n; i++){
        if (mx == ans[i]) cout << i << " ";
    }
    return 0;
}