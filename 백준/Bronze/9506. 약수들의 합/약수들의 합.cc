#include <bits/stdc++.h>
using namespace std;
int n, m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(1){
        vector<int> v;
        int add = 0;
        cin >> m;
        
        if (m == -1) break;

        for (int i=1; i<=m/2; i++){
            if (m % i == 0){
                v.push_back(i);
                add += i;
            }
        }

        if (m == add){
            cout << m << " = ";
            for (int i=0; i < v.size(); i++){
                if (i == v.size()-1){
                    cout << v[i];
                } else {
                    cout << v[i] << " + ";
                }
            }
        } else {
            cout << m << " is NOT perfect.";
        }
        cout << "\n";
    }

    return 0;
}