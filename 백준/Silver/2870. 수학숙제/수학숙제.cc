#include <bits/stdc++.h>
using namespace std;
int n;
string s;
vector<string> v;

bool cmp(string a, string b){
    if (a.size() != b.size()){
        return a.size() < b.size();
    }
    return a < b;
}

string zero(string s){
    string ret = "";
    bool start = 0;

    for (int i=0; i<s.size(); i++){
        if (s[i] != '0') start = 1;
        if (start) ret += s[i];
    }

    if (ret == "") ret = "0";
    return ret;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    while (n--){
        cin >> s;
        int cnt = 0;
        string ans ="";

        for (int i=0; i<s.size(); i++){
            if (s[i] >= '0' && s[i] <= '9'){
                ans += s[i];
            } else {
                if (!ans.empty()){
                    v.push_back(zero(ans));
                    ans ="";
                }
            }
        }
        if (!ans.empty()){
            v.push_back(zero(ans));
        }
    }

    sort(v.begin(), v.end(), cmp);

    for (string i: v){
        cout << i << "\n";
    }

    return 0;
}