#include <iostream>
#include <algorithm>
using namespace std;
string s, tmp;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;

    tmp = s;
    reverse(s.begin(), s.end());

    if (s == tmp){
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}