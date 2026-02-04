#include <bits/stdc++.h>
using namespace std;
char ch;
int r, c, zr, zc;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> r >> c >> zr >> zc;

    for (int i=0; i<r; i++){
        string s;
        for (int j=0; j<c; j++){
            cin >> ch;

            for (int k=0; k<zc; k++){
                cout << ch;
                s += ch;
            }
        }
        cout << "\n";
        for (int l=0; l<zr-1; l++){
            cout << s << "\n";
        }
    }

    return 0;
}