#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(1){
        int cnt = 0;
        string n;
        cin >> n;

        if (n == "#"){
            break;
        }

        for (int i = 0; i < n.size(); i++){
            if (n[i] == '1'){
                cnt++;
            }
        }

        if (n.back() == 'e'){   // 1이 짝수 개
            n.pop_back();

            if (cnt % 2 == 0) {
                n.push_back('0');
            } else {
                n.push_back('1');
            }
        } else if (n.back() == 'o') {   // 1이 홀수 개
            n.pop_back();

            if (cnt % 2 == 1) {
                n.push_back('0');
            } else {
                n.push_back('1');
            }
        }
        
        cout << n << "\n";
    }

    return 0;
}