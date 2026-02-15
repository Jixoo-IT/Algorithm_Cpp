#include <iostream>
using namespace std;
int t, v, e;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;

    while(t--){
        cin >> v >> e;
        cout << 2 - v + e << "\n";
    }

    return 0;
}