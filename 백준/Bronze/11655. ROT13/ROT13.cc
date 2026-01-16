#include <iostream>
#include <string>
using namespace std;
string s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    getline(cin, s);

    for (int i = 0; i<s.size(); i++){
        if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M')){
            s[i] += 13;
        } else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z')){
            s[i] -= 13;
        }
        cout << s[i];
    }

    return 0;

}
    