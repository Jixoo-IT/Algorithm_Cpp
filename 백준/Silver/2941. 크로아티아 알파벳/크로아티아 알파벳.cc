#include <bits/stdc++.h>
using namespace std;
string s;
int cnt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;

    for (int i=0; i<s.size(); i++){
        if (s[i] == 'c' && i+1 < s.size()){
            if (s[i+1] == '=' || s[i+1] == '-'){
                i++;
            }
        } else if (s[i] == 'd' && i+2 < s.size() && s[i+1] == 'z' && s[i+2] == '='){
            i += 2;
        } else if (s[i] == 'd' && i+1 < s.size() && s[i+1] == '-'){
            i++;
        } else if (s[i] == 'l' && i+1 < s.size() && s[i+1] == 'j'){
            i++;
        } else if (s[i] == 'n' && i+1 < s.size() && s[i+1] == 'j'){
            i++;
        } else if (s[i] == 's' && i+1 < s.size() && s[i+1] == '='){
            i++;
        } else if (s[i] == 'z' && i+1 < s.size() && s[i+1] == '='){
            i++;
        }
        cnt++;
    }

    cout << cnt;
    return 0;
}