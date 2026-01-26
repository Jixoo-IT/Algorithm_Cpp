#include <bits/stdc++.h>
using namespace std;
int n, x, y, maxX = -1e9, maxY = -1e9, minX = 1e9, minY = 1e9;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    while (n--) {
        cin >> x >> y;

        maxX = max(x, maxX);
        maxY = max(y, maxY);
        minX = min(x, minX);
        minY = min(y, minY);
    }

    cout << (long long)(maxX - minX) * (long long)(maxY - minY);
    return 0;
}