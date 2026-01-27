#include <bits/stdc++.h>
using namespace std;
char arr[5][15];
string s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i=0; i<5; i++){
        cin >> s;
        for (int j=0; j<s.size(); j++){
            arr[i][j] = s[j];
        }
    }

    for (int j=0; j<15; j++){
        for (int i=0; i<5; i++){
            if (arr[i][j] == 0) continue;
            cout << arr[i][j];
        }
    }
    
    return 0;
}