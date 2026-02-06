#include <iostream>
#include <algorithm>
using namespace std;
int n, m, arr[10], ret[10];
bool visited[10];

void dfs(int idx){
    if (idx == m){
        for (int i=0; i<m; i++){
            cout << ret[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i=0; i<n; i++){
        if (!visited[i]){
            visited[i] = 1;
            ret[idx] = arr[i];

            dfs(idx+1);
            visited[i] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    dfs(0);
    return 0;
}