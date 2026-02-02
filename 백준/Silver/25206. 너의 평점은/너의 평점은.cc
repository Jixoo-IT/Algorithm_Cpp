#include <bits/stdc++.h>
using namespace std;
double n, m, total, all;
string name, s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0; i<20; i++){
        cin >> name >> n >> s;

        if (s == "P") continue;
        else if (s == "A+") m = 4.5;
        else if (s == "A0") m = 4.0;
        else if (s == "B+") m = 3.5;
        else if (s == "B0") m = 3.0;
        else if (s == "C+") m = 2.5;
        else if (s == "C0") m = 2.0;
        else if (s == "D+") m = 1.5;
        else if (s == "D0") m = 1.0;
        else if (s == "F") m = 0.0;

        total += n;
        all += n*m;
    }
    cout << fixed;
    cout.precision(6);
    cout << all / total;
    return 0;
}