#include <bits/stdc++.h>
using namespace std;
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    int ans = 665;

    for (int i=0; i<n; i++){
        while(1){
            ans++;

            if (to_string(ans).find("666") != string::npos){
                break;
            }
        }
    }

    cout << ans;
    return 0;
}