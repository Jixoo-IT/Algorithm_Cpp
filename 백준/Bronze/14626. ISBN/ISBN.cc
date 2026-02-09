#include <iostream>
using namespace std;
string s;
int ans, sum, arr[15], check, w;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;

    for (int i=0; i<13; i++){
        if (s[i] == '*'){
            check = i%2;
            continue;
        } else {
            if (i % 2 == 0){
                sum += (s[i] - 48);
            } else {
                sum += ((s[i] - 48) * 3);
            }
        }
    }

    if (check == 0) w = 1;
    else w = 3;

    for (int i=0; i<=9; i++){
        if ((sum + (i * w)) % 10 == 0) {
            ans = i;
            break;
        }
    }

    cout << ans;
    return 0;
}