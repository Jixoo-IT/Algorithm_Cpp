#include <iostream>
using namespace std;
int n, ans = 1;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    while (n--){
        ans *= 2;
    }

    cout << ans;
    return 0;
}