#include <iostream>
using namespace std;
int r, b, sum;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> r >> b;

    sum = r + b;

    for (int w=3;;w++){
        if (sum % w == 0){
            int l = sum / w;

            if (2*l + 2*(w-2) == r){
                cout << l << " " << w;
                break;
            }
        }
    }

    return 0;
}