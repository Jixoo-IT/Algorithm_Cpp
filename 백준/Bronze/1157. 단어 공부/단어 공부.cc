#include <bits/stdc++.h>
using namespace std;
int mx = -1, target, cnt, arr[26];
string s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;

    for (char c: s){
        arr[toupper(c) - 'A']++;
    }

    for (int i=0; i<26; i++){
        if (arr[i] > mx){
            mx = arr[i];
            target = i;
        }
    }

    for (int i=0; i<26; i++){
        if (mx == arr[i]){
            cnt++;
        }
    }
    
    if (cnt >= 2) {
        cout << "?";
    } else {
        cout << char(target + 'A');   
    }

    return 0;
}