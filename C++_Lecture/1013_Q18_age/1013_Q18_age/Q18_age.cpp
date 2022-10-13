// Q18_외계행성의 나이
// a는 0, b는 1, c는 2, ..., j는 9입니다. 예를 들어 23살은 cd, 51살은 fb로 표현합니다. 
// 나이 age가 매개변수로 주어질 때 PROGRAMMER-962식 나이를 return

// 풀이
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int age) {
    string answer = "";

    for (int i = age; i > 0; i /= 10) {     // 일의 자리 수부터 문자열로 변환, reverse 함수를 이용해 문자열을 뒤집어줘야 함.
        int num = age % 10;

        if (num == 0) {
            answer += 'a';
        }
        else if (num == 1) {
            answer += 'b';
        }
        else if (num == 2) {
            answer += 'c';
        }
        else if (num == 3) {
            answer += 'd';
        }
        else if (num == 4) {
            answer += 'e';
        }
        else if (num == 5) {
            answer += 'f';
        }
        else if (num == 6) {
            answer += 'g';
        }
        else if (num == 7) {
            answer += 'h';
        }
        else if (num == 8) {
            answer += 'i';
        }
        else if (num == 9) {
            answer += 'j';
        }
        age /= 10;
    }

    reverse(answer.begin(), answer.end());      // 문자열을 뒤집는 'reverse'함수 사용, 처음에 rotate 사용해서 오류남 > 문자열 밀기는 답이 다르게 도출됨.

    return answer;
}


// 답안
string solution(int age) {
    string answer = "";
    for (int i = age; i > 0; i /= 10) {
        answer = (char)('a' + i % 10) + answer;
    }
    return answer;
}