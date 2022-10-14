#include <string>
#include <vector>
#include <sstream>      // streamstring을 사용하기 위한 헤더

using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);        // streamstring: 문자열에서 원하는 자료형의 데이터를 추출할 때 사용
    ss.str(polynomial);                 // str(string s): 현재 stringstream의 값을 s로 바꾼다.

    int num_x = 0, num = 0;
    string token;       // token의 자료형: string

    while (ss >> token) {       // 문자열 ss에서 token의 자료형(string)에 맞는 정보가 없을 때까지 ss에서 token으로 자료를 추출/복사하는 것. 즉, 숫자를 제외한 x만 추출
        if (token != "+") {
            if (token.find("x") != -1) {        // string.find("")해당 문자의 시작 인덱스 반환
                if (token == "x")
                    num_x += 1;
                else num_x += stoi(token.substr(0, token.size() - 1));      //substr(첫 번째 문자의 위치, 부분 문자열의 길이)
            }
            else {
                num += stoi(token);         // stoi: string to int
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