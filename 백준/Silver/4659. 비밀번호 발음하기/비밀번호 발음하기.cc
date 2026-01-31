#include <bits/stdc++.h>
using namespace std;
string s;
int vcnt, ccnt;
bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o');
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1){
        cin >> s;
        if (s == "end") break;

        vcnt = 0;
        ccnt = 0;

        bool hasVowel = 0;
        bool flag = 0;
        char prev;

        for (int i=0; i<s.size(); i++){
            int a = s[i];

            if (isVowel(a)){
                vcnt++;
                ccnt = 0;
                hasVowel = 1;
            } else {
                ccnt++;
                vcnt = 0;
            }

            if (vcnt == 3 || ccnt == 3){
                flag = 1;
                break;
            }

            if ((i >= 1) && (prev == a) && (a != 'e') && (a != 'o')){
                flag = 1;
                break;
            }
            prev = a;
        }

        if (!hasVowel){
            flag = 1;
        }

        if (!flag){
            cout << "<" << s << "> is acceptable." << "\n";
        } else{
            cout << "<" << s << "> is not acceptable." << "\n";
        }
    }

    return 0;
}