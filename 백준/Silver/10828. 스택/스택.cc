#include <iostream>
#include <stack>
using namespace std;
int n, m;
string s;
stack<int> st;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> s;

        if (s == "push"){
            cin >> m;
            st.push(m);
        } else if (s == "pop"){
            if (st.size()) {
                cout << st.top() << "\n";
                st.pop();
            }
            else cout << "-1" << "\n";
        } else if (s == "size"){
            cout << st.size() << "\n";
        } else if (s == "empty"){
            cout << st.empty() << "\n";
        } else if (s == "top"){
            if (st.size()) cout << st.top() << "\n";
            else cout << "-1" << "\n";
        }
    }

    return 0;
}