#include <bits/stdc++.h>
using namespace std;
string s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(1){
        getline(cin, s);
        if (s == ".") break;

        stack<char> st;

        for (int i=0; i<s.size(); i++){
            if (!st.empty() && st.top() == '(' && s[i] == ')'){
                st.pop();
            } else if (!st.empty() && st.top() == '[' && s[i] == ']'){
                st.pop();
            } else if (s[i] == '(' || s[i] == ')' || s[i] == '[' || s[i] == ']'){
                st.push(s[i]);
            }
        }

        if (st.empty()){
            cout << "yes" << "\n";
        } else {
            cout << "no" << "\n";
        }
    }
    
    return 0;
}