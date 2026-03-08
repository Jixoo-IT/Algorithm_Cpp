#include <iostream>
using namespace std;
int n, a, b, dp[15][15];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i=1; i<=14; i++){
        dp[0][i] = i;
    }

    for (int i=1; i<=14; i++){
        for (int j=1; j<=14; j++){
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }

    while(n--){
        cin >> a >> b;
        cout << dp[a][b] << "\n";        
    }

    return 0;
}