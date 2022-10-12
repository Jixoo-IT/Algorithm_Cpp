#include <string>

using namespace std;

int solution(int n) {
    int answer = 2;

    for (int i = 1; i <= n; i++) {
        if (i * i == n) {   // if (n / i == i)로 하면, 테스트케이스 8, 10에서 오류 발생/ 이런 문제에는 나누기보다 곱하기로 접근하자.
            return 1;
        }
    }
    return answer;
}

// 	실패 (signal: floating point exception (core dumped)) > i=0으로 초기화하고, 나누기 i를 해서 오류 발생