#include <bits/stdc++.h>
using namespace std;
long long n, ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    
    for (int i=1; i<=n-1; i++){
        for (int j=i+1; j<=n; j++){
            ans++;
        }
    }
    
    cout << ans << "\n" << "2";    
    return 0;
}