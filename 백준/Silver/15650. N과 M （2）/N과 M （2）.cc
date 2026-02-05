#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[10];

void dfs(int num, int idx){
    if (idx == m){
        for (int i=0; i<m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i=num; i<=n; i++){
        arr[idx] = i;
        dfs(i+1, idx+1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    dfs(1, 0);
    return 0;
}