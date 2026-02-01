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
        bool isValid = 1;

        for (int i=0; i<s.size(); i++){
            if (s[i] == '(' || s[i] == '['){
                st.push(s[i]);
            } else if (s[i] == ')'){
                if (!st.empty() && st.top() == '('){
                    st.pop();
                } else {
                    isValid = 0;
                    break;
                }
            } else if (s[i] == ']'){
                if (!st.empty() && st.top() == '['){
                    st.pop();
                } else {
                    isValid = 0;
                    break;
                }
            }
        }

        if (isValid && st.empty()){
            cout << "yes" << "\n";
        } else {
            cout << "no" << "\n";
        }
    }
    
    return 0;
}