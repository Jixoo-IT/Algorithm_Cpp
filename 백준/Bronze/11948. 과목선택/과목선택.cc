#include <iostream>
#include <algorithm>
using namespace std;
int arr[5];
int n, ans, a, b;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for (int i=0; i<4; i++){
        cin >> arr[i];
    }

    sort(arr, arr+4, greater<int>());

    for (int i=0; i<3; i++){
        ans += arr[i];
    }

    cin >> a >> b;
    if (a > b) ans += a;
    else ans += b;

    cout << ans;
    return 0;
}   