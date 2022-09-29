// Q7. 대문자와 소문자

#include <string>
#include <vector>

using namespace std;

char change(char c) {
    if (c > 'Z') {   // lower case
        return c - ('a' - 'A');
    }
    else {    // upper case
        return c + ('a' - 'A');
    }
}


string solution(string my_string) {
    string answer = "";

    for (int i = 0; i < my_string.size(); i++) {
        answer += change(my_string[i]);
    }

    return answer;
}