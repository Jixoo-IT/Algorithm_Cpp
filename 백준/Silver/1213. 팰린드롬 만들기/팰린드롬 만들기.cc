#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int cnt[200], flag;
char mid;
string s, ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;

    for (char a : s){
        cnt[a]++;
    }

    for (int i = 'A'; i <= 'Z'; i++){
        if (cnt[i]){
            if (cnt[i] & 1){
                mid = char(i);
                flag++;
                cnt[i]--;
            }
        }
    }

    if (flag >= 2){
        cout << "I'm Sorry Hansoo";
        return 0;
    }

    for (int i = 'A'; i <= 'Z'; i++){
        for (int j = 0; j < cnt[i] / 2; j++){
            ans += char(i);
        }
    }

    string temp = ans;
    reverse(temp.begin(), temp.end());

    if (mid) {
        ans += mid;
    }
    ans += temp;
    cout << ans << "\n";

    return 0;
}