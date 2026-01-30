#include <iostream>
using namespace std;
typedef long long ll;
int n, cnt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (cin >> n){
        long long a = 1;
        cnt = 0;

        while (1){
            if (a % n == 0) {
                cnt++;
                break;
            };
            cnt++;
            a = (a*10 + 1) % n;
        }
        cout << cnt << "\n";
    }

    return 0;
}