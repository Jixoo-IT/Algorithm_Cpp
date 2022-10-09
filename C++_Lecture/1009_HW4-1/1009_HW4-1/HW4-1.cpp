#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);
    ss.str(polynomial);

    int num_x = 0, num = 0;
    string token;

    while (ss >> token) {
        if (token != "+") {
            if (token.find("x") != -1) {
                if (token == "x")
                    num_x += 1;
                else num_x += stoi(token.substr(0, token.size() - 1));
            }
            else {
                num += stoi(token);
            }
        }
    }

    if (num_x == 1) {
        answer += "x";
    }
    else if (num_x > 1) {
        answer = answer + to_string(num_x) + "x";
    }


    if (answer.size() != 0 && num != 0) {
        answer = answer + " + " + to_string(num);
    }
    else if (num != 0)
        answer = to_string(num);

    return answer;
}