// Q7. 대문자와 소문자

// 풀이 (아스키코드 65-90: 대문자, 97-122: 소문자)
#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";

    for (int i = 0; i < my_string.size(); i++) {
        if (my_string[i] > 'Z') {   // 'Z'보다 아스키코드 값이 크므로 소문자 -> 대문자
            answer += my_string[i] - 32;
        }
        else {      // 'Z'보다 아스키코드 값이 작으므로 대문자 -> 소문자
            answer += my_string[i] + 32;
        }
    }

    return answer;
}


// 답안
#include <string>
#include <vector>

using namespace std;

char change(char c) {
    if (c > 'Z') {   // lower case
        return c - ('a' - 'A'); // return c - 32;
    }
    else {    // upper case
        return c + ('a' - 'A'); // return c + 32;
    }
}


string solution(string my_string) {
    string answer = "";

    for (int i = 0; i < my_string.size(); i++) {
        answer += change(my_string[i]);
    }

    return answer;
}