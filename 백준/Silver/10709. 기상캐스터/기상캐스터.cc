#include <bits/stdc++.h>
using namespace std;
int h, w;
string s;
char c[101][101];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> h >> w;

    while(h--){
        cin >> s;

        int move = 0;
        bool isCloud = 0;

        for (int i=0; i<s.size(); i++){
            if (s[i] == 'c') {
                cout << "0" << " ";
                move = 0;
                isCloud = 1;
            } else if (s[i] == '.'){
                if (isCloud == 1){
                    move++;
                    cout << move << " ";
                } else {
                    cout << "-1" << " ";
                    move = 0;
                    isCloud = 0;
                }
            }
        }

        cout << "\n";
    }

    return 0;
}