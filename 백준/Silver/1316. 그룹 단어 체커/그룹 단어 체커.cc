#include <bits/stdc++.h>
using namespace std;
int n, cnt;
string s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> s;
        int arr[26] = {0, };
        arr[s[0] - 'a'] = 1;
        
        for (int j=1; j<s.size(); j++){
            if (s[j] == s[j-1]){
                continue;
            } else if (s[j] != s[j-1] && arr[s[j] - 'a'] == 0){
                arr[s[j] - 'a'] = 1;
            } else if (s[j] != s[j-1] && arr[s[j] - 'a'] == 1){
                cnt++;
                break;
            }
        }
    }

    cout << n - cnt;

    return 0;
}