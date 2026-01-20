#include <bits/stdc++.h>
using namespace std;
int n, m, j, r, tmp, ans;
int l = 1;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> j;

    while(j--) {
        cin >> tmp;
        r = l + m - 1;

        if (tmp >= l && tmp <= r) {
            continue;
        } else {
            if (tmp < l) {
                ans += (l - tmp);
                l = tmp;
            } else if (tmp > r){
                ans += (tmp - r);
                l += (tmp - r);
            }
        }
    }
    cout << ans;
    return 0;
}