#include <iostream>
#include <string>
using namespace std;
string s;
int n, ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cin.ignore();

    while(n--) {
        ans = 0;
        getline(cin, s);
        
        for (int i=0; i<s.size(); i++){
            if (s[i] == ' ') continue;
            ans += s[i] - 'A' + 1;
        }

        if (ans == 100){
            cout << "PERFECT LIFE" << "\n";
        } else {
            cout << ans << "\n";
        }
    }

    return 0;
}