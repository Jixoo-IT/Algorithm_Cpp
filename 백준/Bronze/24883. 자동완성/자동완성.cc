#include <iostream>
using namespace std;
char c;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> c;

    if (c == 'N' || c == 'n') cout << "Naver D2";
    else cout << "Naver Whale";

    return 0;
}   