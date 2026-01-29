#include <bits/stdc++.h>
using namespace std;
int n, cnt;
string s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    while(n--){
        stack<int> st;
        cin >> s;

        for (char c: s){
            if (!st.empty() && st.top() == c){
                st.pop();
            } else{
                st.push(c);
            }
        }

        if (st.empty()){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}