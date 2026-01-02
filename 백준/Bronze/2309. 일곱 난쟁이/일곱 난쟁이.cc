#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a[9], sum;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 9; i++){
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + 9);

    for (int i=0;i<9;i++){
        for (int j = i+1;j<9;j++){
            if (sum - (a[i] + a[j]) == 100){
                for (int k = 0; k < 9; k++){
                    if (k != i && k != j){
                        cout << a[k] << "\n";
                    }
                }
                return 0;
            }
        }
    }
}