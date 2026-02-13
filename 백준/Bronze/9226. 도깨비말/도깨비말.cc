#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
string s;
bool flag;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(1){
        flag = 0;
        cin >> s;

        string o = s;
        if (s == "#") break;

        for (char c: o){
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                s += "ay";
                flag = 1;
                cout << s << "\n";
                break;
            } else {
                string st;
                for (int i=1; i<s.size(); i++){
                    st += s[i];
                }
                s = st;
                s += c;
            }
        }

        if (!flag){
            s += "ay";
            cout << s << "\n";
        }
    }

    return 0;
}