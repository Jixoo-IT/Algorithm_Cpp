#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, a;
string s;
vector<pair<int, string>> v;

bool cmp(const pair<int, string>& a, const pair<int, string>& b){
    return a.first < b.first;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    v.reserve(n);

    while (n--){
        cin >> a >> s;
        v.push_back({a, s});
    }

    stable_sort(v.begin(), v.end(), cmp);

    for (auto& a: v){
        cout << a.first << " " << a.second << "\n";
    }

    return 0;
}