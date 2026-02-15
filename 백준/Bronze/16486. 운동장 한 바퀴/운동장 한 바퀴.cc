#include <iostream>
using namespace std;
double a, b;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;

    cout << fixed;
    cout.precision(6);
    cout << a * 2 + 2 * 3.141592 * b;
    return 0;
}