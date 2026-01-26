#include <bits/stdc++.h>
using namespace std;
int arr[3];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);
    int a = arr[0], b = arr[1], c = arr[2];

    if (c >= a + b){
        c = a + b - 1;
    }

    cout << a + b + c;

    return 0;
}