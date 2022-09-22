#include <string>
#include <vector>

using namespace std;

int sum(int i, int num) {
    int total = 0;
    for (int j = 0; j < num; j++)
        total += i + j;
    return total;
}


vector<int> solution(int num, int total) {
    vector<int> answer;

    for (int i = -1000; i <= 1000; i++) {   // -total 이라고 할 경우, total이 0이라면, -2, -1, 0, 1, 2가 정답인데 0~0만 돌아가므로 오류 발생. 따라서 total 대신 1000으로 지정함.
        if (sum(i, num) == total) {
            for (int j = 0; j < num; j++)
                answer.push_back(i + j);
            break;
        }
    }
    return answer;
}