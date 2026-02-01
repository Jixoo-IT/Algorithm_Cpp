#include <bits/stdc++.h>
using namespace std;
int t, n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;

    while(t--){
        cin >> n;
        int ans = 0;

        for (int i=5; i<=n; i *= 5){
            ans += n/i;
        }
        cout << ans << "\n";
    }

    return 0;
}