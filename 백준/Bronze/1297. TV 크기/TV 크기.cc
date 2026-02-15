#include <iostream>
#include <cmath>
using namespace std;
double d, h, w, n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> d >> h >> w;

    n = d / sqrt(h * h + w * w);
    
    cout << int(h * n) << " " << int(w * n);
    return 0;
}