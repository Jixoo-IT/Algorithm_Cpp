#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, a, b;
vector<pair<int, int>> v;

bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.first != b.first) return a.first < b.first;
    else return a.second < b.second;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    while (n--){
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end(), cmp);

    for (const auto& a: v){
        cout << a.first << " " << a.second << "\n";
    }
}

