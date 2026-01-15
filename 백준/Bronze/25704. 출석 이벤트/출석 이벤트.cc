#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p;
    cin >> n >> p;

    int ans = p;

    if (n >= 5){
        ans = min(ans, p - 500);
    } 

    if (n >= 10){
        ans = min(ans, p * 90 / 100);
    } 

    if (n >= 15){
        ans = min(ans, p - 2000);
    } 

    if (n >= 20){
        ans = min(ans, p * 75 / 100);
    } 

    if (ans < 0) {
        ans = 0;
    }

    cout << ans;

    return 0;
}