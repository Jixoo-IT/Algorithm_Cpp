#include <bits/stdc++.h>
using namespace std;
string a, b, sign;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> sign >> b;

    if (sign == "*"){
        cout << 1;
        for (int i=0; i<(a.size()-1+b.size()-1); i++){
            cout << 0;
        }
    } else {
        if (a.size() == b.size()){
            cout << 2;
            for (int i=0; i<a.size()-1; i++){
                cout << 0;
            }
        } else {
            if (a.size() < b.size()) swap(a, b);

            a[a.size() - b.size()] = '1';
            cout << a;
        }
    }

    return 0;
}