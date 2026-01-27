#include <bits/stdc++.h>
using namespace std;
int n, arr[104][104], x, y, cnt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    while (n--){
        cin >> x >> y;
        for (int i=x; i<x+10; i++){
            for (int j=y; j<y+10; j++){
                arr[i][j] = 1;
            }
        }
    }

    for (int i=0; i<100; i++){
        for (int j=0; j<100; j++){
            if (arr[i][j] == 1) cnt++;
        }
    }

    cout << cnt;
    return 0;
}