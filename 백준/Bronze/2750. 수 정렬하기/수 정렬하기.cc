#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    while(n--){
        cin >> m;
        v.push_back(m);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for (auto a: v){
        cout << a << "\n";
    }
    return 0;
}