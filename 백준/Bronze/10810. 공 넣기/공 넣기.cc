#include <bits/stdc++.h>
using namespace std;
int n, m, i, j, k;
int arr[104];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    while (m--){
        cin >> i >> j >> k;
        for (int l=i; l<=j; l++){
            arr[l] = k;
        }
    }

    for (int l=1; l<=n; l++){
        cout << arr[l] <<" ";
    }
    return 0;
}