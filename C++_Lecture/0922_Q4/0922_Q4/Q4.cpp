// 연속된 수의 합

// 내 풀이 - 등차수열의 합 공식을 이용해 풀이
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;

    int check = 2 * total / num;
    int start = (check - num + 1) / 2;

    for (int i = start; i < start + num; i++) {   // 바보: for (start; start < start+ num; start++)
        answer.push_back(i);
    }

    return answer;
}



// 답안
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