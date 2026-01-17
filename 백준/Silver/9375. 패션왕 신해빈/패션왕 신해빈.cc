#include <iostream>
#include <string>
#include <map>
using namespace std;

int t, n;
string name, type;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;

    while(t--){
        map<string, long long> mp;

        cin >> n;

        for (int i = 0; i < n; i++){
            cin >> name >> type;
            mp[type]++;
        }

        long long ans = 1;

        for (auto p : mp){
            ans *= (p.second + 1);
        }

        cout << --ans << "\n";
    }

    return 0;
}