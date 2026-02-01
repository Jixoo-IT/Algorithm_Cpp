#include <bits/stdc++.h>
using namespace std;
int n;
string s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    while(n--){
        cin >> s;
        stack<char> st;

        for (int i=0; i<s.size(); i++){
            if (!st.empty() && st.top() == '(' && s[i] == ')'){
                st.pop();
            } else {
                st.push(s[i]);
            }
        }

        if (st.empty()){
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}