#include <bits/stdc++.h>
using namespace std;
int x, y, w, h, ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> x >> y >> w >> h;

    ans = min({(w-x), x, (h-y), y});

    cout << ans;
    return 0;
}