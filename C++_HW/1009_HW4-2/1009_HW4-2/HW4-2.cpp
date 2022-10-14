#include <string>
#include <vector>

using namespace std;

// 답안

vector<int> solution(int n) {
    vector<int> answer;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            answer.push_back(i);
            while (n % i == 0) { // 12를 소인수분해하면 2*2*3, 2와 같이 중복되는 값을 고려하기 위해, while문을 이용
                n /= i;
            }
        }
    }

    return answer;
}


// 풀이 (일부 테스트케이스 실패)
vector<int> solution(int n) {
    vector<int> answer;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            n = n / i;
            if (answer.empty()) {
                answer.push_back(i);
            }
            else if (answer[answer.size() - 1] != i) {
                answer.push_back(i);
            }
        }
        else {
            i++;
        }
    }

    return answer;
}
