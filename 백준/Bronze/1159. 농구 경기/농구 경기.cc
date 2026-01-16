#include <iostream>
using namespace std;
int n, cnt[154];
string s, ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while(n--){
        cin >> s;
        cnt[s.front() - 'a']++;
    }

    for (int i = 0; i < 26; i++){
        if (cnt[i] >= 5){
            ans += (i + 'a');
        } 
    }

    if (ans == ""){
        cout << "PREDAJA";
    } else {
        cout << ans;
    }
}