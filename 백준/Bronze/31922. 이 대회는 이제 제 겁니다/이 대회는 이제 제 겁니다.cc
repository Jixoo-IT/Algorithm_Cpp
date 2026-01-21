#include <iostream>
using namespace std;
int a, p, c;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> p >> c;

    if (a+c > p){
        cout << a+c;
    } else {
        cout << p;
    }
    
    return 0;
}