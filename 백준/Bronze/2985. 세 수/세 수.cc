#include <iostream>
using namespace std;
int a, b, c;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c;

    if (a == b + c) {
        cout << a << "=" << b << "+" << c;
    } else if (a == b - c){
        cout << a << "=" << b << "-" << c;
    } else if (a == b * c){
        cout << a << "=" << b << "*" << c;
    } else if (a == b / c){
        cout << a << "=" << b << "/" << c;
    } else if (a + b == c){
        cout << a << "+" << b << "=" << c;
    } else if (a - b == c){
        cout << a << "-" << b << "=" << c;
    } else if (a * b == c){
        cout << a << "*" << b << "=" << c;
    } else if (a / b == c){
        cout << a << "/" << b << "=" << c;
    }

    return 0;
}