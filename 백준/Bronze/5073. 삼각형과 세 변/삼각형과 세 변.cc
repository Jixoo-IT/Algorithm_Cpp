#include <bits/stdc++.h>
using namespace std;
int arr[3];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1){
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);
        int a = arr[0], b = arr[1], c = arr[2];

        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        if (c >= a + b){
            cout << "Invalid" << "\n";
        } else if (a == b && b == c){
            cout << "Equilateral" << "\n";
        } else if (a == b || b == c || c == a){
            cout << "Isosceles" << "\n";
        } else {
            cout << "Scalene" << "\n";
        }
    }

    return 0;
}