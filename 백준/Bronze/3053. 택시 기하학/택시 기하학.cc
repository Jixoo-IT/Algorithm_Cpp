#include <iostream>
#include <cmath>
using namespace std;
double r;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> r;

    double pi = acos(-1);

    cout << fixed;
    cout.precision(6);
    
    cout << pi * r * r << "\n" << 2 * r * r;
    return 0;
}