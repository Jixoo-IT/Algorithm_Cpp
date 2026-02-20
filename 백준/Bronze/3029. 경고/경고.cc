#include <iostream>
using namespace std;
string a, b, s1, s2, s3;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;

    int n = stoi(a.substr(0, 2)) * 60 * 60 + stoi(a.substr(3, 2)) * 60 + stoi(a.substr(6, 2));
    int m = stoi(b.substr(0, 2)) * 60 * 60 + stoi(b.substr(3, 2)) * 60 + stoi(b.substr(6, 2));

    if (n >= m) m += 24 * 60 * 60;

    int t = m - n;

    int hh = t / (60 * 60);
    t -= hh * 60 * 60;

    int mm = t / 60;
    t -= mm * 60;

    int ss = t;

    if (hh < 10){
        s1 = '0' + to_string(hh);
    } else s1 = to_string(hh);

    if (mm < 10){
        s2 = '0' + to_string(mm);
    } else s2 = to_string(mm);

    if (ss < 10){
        s3 = '0' + to_string(ss);
    } else s3 = to_string(ss);

    cout << s1 << ":" << s2 << ":" << s3;
    return 0;
}