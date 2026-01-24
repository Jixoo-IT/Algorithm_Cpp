#include <bits/stdc++.h>
using namespace std;
int n, m, i, j, tmp;
int arr[104];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for (int l=1; l<=n; l++){
        arr[l] = l;
    }

    while (m--){
        cin >> i >> j;
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    for (int l=1; l<=n; l++){
        cout << arr[l] <<" ";
    }
    return 0;
}