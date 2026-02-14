#include <iostream>
using namespace std;
int ax, ay, az, cx, cy, cz;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> ax >> ay >> az >> cx >> cy >> cz;

    cout << cx - az << " " << cy / ay << " " << cz - ax;
    return 0;
}