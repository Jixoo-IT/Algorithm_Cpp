#include <iostream>
#include <algorithm>
using namespace std;
long long case1, case2, arr[5];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for (int i=0; i<3; i++){
        cin >> arr[i];
    }

    case1 = arr[0] * arr[1] / arr[2];
    case2 = arr[0] * arr[2] / arr[1];

    cout << max(case1, case2);
    return 0;
}