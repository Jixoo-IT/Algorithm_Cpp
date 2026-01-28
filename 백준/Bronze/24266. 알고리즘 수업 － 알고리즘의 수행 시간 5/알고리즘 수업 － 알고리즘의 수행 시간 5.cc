#include <bits/stdc++.h>
using namespace std;
long long n, ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            for (int k=1; k<=n; k++){
                ans++;
            }
        }
    }
    
    cout << ans << "\n" << "3";    
    return 0;
}