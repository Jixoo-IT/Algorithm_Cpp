//Q10_로그인 성공(?)

// 풀이
#include <string>
#include <vector>

using namespace std;

int match(vector<string> id_pw, vector<string> candidate) {
    if (id_pw[0] == candidate[0] && id_pw[1] == candidate[1]) {
        return 2;       // login
    }
    else if (id_pw[0] == candidate[0]) {
        return 1;       // wrong pw
    }
    else {
        return 0;       // fail
    }
}

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";

    int result;
    for (int i = 0; i < db.size(); i++) {
        result = match(id_pw, db[i]);
        if (result == 2) {
            answer = "login";
        }
        else if (result == 1) {
            answer = "wrong pw";
        }
    }

    return answer;
}