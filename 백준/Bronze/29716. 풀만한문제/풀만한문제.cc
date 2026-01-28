#include <bits/stdc++.h>
using namespace std;
int j, n, num, cnt;
string s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> j >> n;
    cin.ignore();

    while (n--){
        getline(cin, s);
        num = 0;

        for (char c: s){
            if (c == ' '){
                num += 1;
            } else if (c >= 'A' && c <= 'Z') {
                num += 4;
            } else {
                num += 2;
            }
        }

        if (num <= j){
            cnt++;
        }
    }

    cout << cnt;    
    return 0;
}