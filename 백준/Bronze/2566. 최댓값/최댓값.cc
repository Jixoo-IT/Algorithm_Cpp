#include <bits/stdc++.h>
using namespace std;
int n, mx = -1, x, y;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            cin >> n;

            if (n > mx){
                mx = n;
                x = i+1;
                y = j+1;
            }
        }
    }

    cout << mx << "\n";
    cout << x << " " << y;
    
    return 0;
}