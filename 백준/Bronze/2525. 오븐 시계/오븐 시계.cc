#include <iostream>
using namespace std;
int h, m, c;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> h >> m >> c;

    int a = c / 60;
    int b = c % 60;
    
    h += a;

    if (m + b < 60) {
        m += b;
    } else {
        h += 1;
        m += (b - 60);
    }
    
    if (h >= 24){
        h -= 24;
    }
    
    cout << h << " " << m;

    return 0;
}