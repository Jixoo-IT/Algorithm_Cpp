#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    double h, w;
    cin >> h >> w;

    cout << fixed;
    cout.precision(1);

    cout << h * w / 2;

    return 0;
}