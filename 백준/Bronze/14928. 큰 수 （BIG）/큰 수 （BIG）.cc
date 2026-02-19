#include <iostream>
using namespace std;
string s;
long long ans = 0;
long long MOD = 20000303;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;

    for (char c: s){
        ans = (ans * 10 + (c - '0')) % MOD;
    }

    cout << ans;
    return 0;
}