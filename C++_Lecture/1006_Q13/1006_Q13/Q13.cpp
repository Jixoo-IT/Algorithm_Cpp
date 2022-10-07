#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    int a = dot[0], b = dot[1];

    if (a > 0 && b > 0) {
        answer = 1;
    }
    else if (a < 0 && b>0) {
        answer = 2;
    }
    else if (a < 0 && b < 0) {
        answer = 3;
    }
    else if (a > 0 && b < 0) {
        answer = 4;
    }

    return answer;
}