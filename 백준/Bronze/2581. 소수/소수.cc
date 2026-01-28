#include <bits/stdc++.h>
using namespace std;
int n, m, cnt, ans, mn = 1e9;
bool isPrime;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;

    for (int i=m; i<=n; i++){
        if (i < 2) continue;

        isPrime = 1;

        for (int j=2; j*j<=i; j++){
            if (i%j == 0){
                isPrime = 0;
                break;
            }
        }

        if (isPrime){
            ans += i;
            if (i < mn){
                mn = i;
            }
        }
    }

    if (ans == 0){
        cout << "-1";
    } else {
        cout << ans << "\n" << mn;
    }
    return 0;
}