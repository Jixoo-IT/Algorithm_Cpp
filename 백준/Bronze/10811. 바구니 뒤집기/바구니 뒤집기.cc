#include <bits/stdc++.h>
using namespace std;
int n, m, tmp, i, j, arr[104];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for (int i=1; i<=n; i++){
        arr[i] = i;
    }

    while(m--){
        cin >> i >> j;
        
        reverse(arr+i, arr+j+1);
    }

    for (int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }

}