#include <bits/stdc++.h>
using namespace std;
int n, m, arr[15004], cnt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i] + arr[j] == m){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}