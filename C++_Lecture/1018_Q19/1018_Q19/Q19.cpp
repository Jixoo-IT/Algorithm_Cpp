// Q.19 각도기
// 각 angle이 매개변수로 주어질 때 
// 예각일 때 1, 직각일 때 2, 둔각일 때 3, 평각일 때 4를 return하도록 solution 함수를 완성해주세요.

#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;

    if (angle == 180) {
        answer = 4;
    }
    else if (angle > 90) {
        answer = 3;
    }
    else if (angle == 90) {
        answer = 2;
    }
    else if (angle > 0) {
        answer = 1;
    }

    return answer;
}