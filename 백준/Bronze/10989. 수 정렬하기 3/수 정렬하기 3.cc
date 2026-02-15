#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, m, arr[10004];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> m;
        arr[m]++;
    }

    for (int i=1; i<=10000; i++){
        while (arr[i]--) cout << i << "\n";
    }

    return 0;
}