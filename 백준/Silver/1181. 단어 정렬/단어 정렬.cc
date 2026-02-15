#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, m;
string s;
vector<string> v;

bool cmp(string a, string b){
    if (a.size() != b.size()) return a.size() < b.size();
    else return a < b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), cmp);

    for (int i=0; i<n; i++){
        if (v[i] != v[i+1]) cout << v[i] << "\n";
    }
    return 0;
}