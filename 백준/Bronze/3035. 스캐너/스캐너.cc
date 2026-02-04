#include <bits/stdc++.h>
using namespace std;
char arr[51][51];
int r, c, zr, zc;
vector<char> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> r >> c >> zr >> zc;

    for (int i=0; i<r; i++){
        v.clear();
        for (int j=0; j<c; j++){
            cin >> arr[i][j];

            for (int k=0; k<zc; k++){
                cout << arr[i][j];
                v.push_back(arr[i][j]);
            }
        }
        cout << "\n";
        for (int l=0; l<zr-1; l++){
            for (auto a: v){
                cout << a;
            }
            cout << "\n";
        }
    }

    return 0;
}