#include <iostream>
#include <vector>
using namespace std;
int n, m, t, p, ansT;
vector<int> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i=0; i<6; i++){
        cin >> m;
        v.push_back(m);
    }

    cin >> t >> p;

    for (auto a: v){
        if (a % t == 0) ansT += a / t;
        else ansT += a / t + 1;
    }

    cout << ansT << "\n";
    cout << n / p << " " << n % p;
    return 0;
}