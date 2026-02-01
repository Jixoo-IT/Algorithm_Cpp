#include <bits/stdc++.h>
using namespace std;
int n, team, acnt, bcnt, ascore, bscore;
int prev_time = 0;
string s;

int to_sec(string s){
    int hour = stoi(s.substr(0, 2));
    int second = stoi(s.substr(3, 2));

    return hour * 60 + second;
}

void print_time(int t){
    string mm = "00" + to_string(t/60);
    string ss = "00" + to_string(t%60);

    cout << mm.substr(mm.size() -2, 2) << ":" << ss.substr(ss.size() - 2, 2) << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    while(n--){
        cin >> team >> s;

        int curr_time = to_sec(s);

        if (acnt > bcnt){
            ascore += curr_time - prev_time;
        } else if (acnt < bcnt){
            bscore += curr_time - prev_time;
        }

        if (team == 1) acnt++;
        else bcnt++;

        prev_time = curr_time;
    }

    if (acnt > bcnt) {
        ascore += 48*60 - prev_time;
    } else if (acnt < bcnt) {
        bscore += 48*60 - prev_time;
    }

    print_time(ascore);
    print_time(bscore);

    return 0;
}