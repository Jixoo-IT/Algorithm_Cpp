#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int p, c, ans = 0;
    cin >> p >> c;

    if (p > c){
        ans = (c+1)+c;
    } else {
        ans = (p-1)+p;
    }

    cout << ans;

    return 0;
}