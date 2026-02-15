#include <iostream>
#include <queue>
using namespace std;
int n, m;
string s;
queue<int> q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> s;

        if (s == "push"){
            cin >> m;
            q.push(m);
        } else if (s == "pop"){
            if (q.size()) {
                cout << q.front() << "\n";
                q.pop();
            }
            else cout << "-1" << "\n";
        } else if (s == "size"){
            cout << q.size() << "\n";
        } else if (s == "empty"){
            cout << q.empty() << "\n";
        } else if (s == "front"){
            if (q.size()) cout << q.front() << "\n";
            else cout << "-1" << "\n";
        } else if (s == "back"){
            if (q.size()) cout << q.back() << "\n";
            else cout << "-1" << "\n";
        }
    }

    return 0;
}