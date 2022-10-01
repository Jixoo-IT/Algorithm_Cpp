// Q10. 로그인 성공

#include <string>
#include <vector>

using namespace std;


int match(vector<string> id_pw, vector<string> candidate) {
    if (id_pw[0] == candidate[0] && id_pw[1] == candidate[1]) return 2;
    else if (id_pw[0] == candidate[0]) return 1;
    else return 0;
}


string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";

    int cat;
    for (int i = 0; i < db.size(); i++) {
        cat = match(id_pw, db[i]);
        if (cat == 2)
            return "login";
        else if (cat == 1) {
            answer = "wrong pw";
        }
    }

    return answer;
}