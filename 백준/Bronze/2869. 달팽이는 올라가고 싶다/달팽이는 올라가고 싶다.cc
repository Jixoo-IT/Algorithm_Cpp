#include <iostream>
using namespace std;
int a, b, v, ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> v;

    int q = (v-a)/(a-b);
    int r = (v-a)%(a-b);

    if (r == 0) ans = q + 1;
    else ans = q + 2;

    cout << ans;
    return 0;
}