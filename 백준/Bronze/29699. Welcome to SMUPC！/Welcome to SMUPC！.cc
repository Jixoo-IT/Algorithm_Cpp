#include <bits/stdc++.h>
using namespace std;
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    string s = "WelcomeToSMUPC";

    cout << s[(n-1)%14];
    return 0;
}