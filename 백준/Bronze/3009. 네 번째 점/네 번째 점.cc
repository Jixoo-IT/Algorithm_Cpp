#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int resX = x1 ^ x2 ^ x3;
    int resY = y1 ^ y2 ^ y3;

    cout << resX << " " << resY;

    return 0;
}