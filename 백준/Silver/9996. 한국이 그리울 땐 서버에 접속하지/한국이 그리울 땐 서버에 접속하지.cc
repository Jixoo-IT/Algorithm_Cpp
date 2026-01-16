#include <iostream>
using namespace std;
int n;
string s, file, pre, suf;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;

    int pos = s.find("*");
    pre = s.substr(0, pos);
    suf = s.substr(pos + 1);

    while(n--){
        cin >> file;

        if (pre.size() + suf.size() > file.size()){
            cout << "NE" << "\n";
        } else {
            if (pre == file.substr(0, pos) && suf == file.substr(file.size() - suf.size())){
                cout << "DA" << "\n";
            } else {
                cout << "NE" << "\n";
            }
        }
    }

    return 0;
}