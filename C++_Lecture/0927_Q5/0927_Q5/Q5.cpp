// n의 배수 고르기

// 풀이 1_ 나머지 이용, 가능하면 '나머지 == 0'으로 해서 풀자
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {  
    vector<int> answer;

    for (int i = 0; i < numlist.size(); i++) {
        if (numlist[i] % n == 0) {
            answer.push_back(numlist[i]);
        }
    }

    return answer;
}

// 풀이 2 _ 곱하기 이용
vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    int num = 0;

    for (int i = 0; i < numlist.size(); i++) {
        num = numlist[i];
        for (int j = 1; j <= 10000; j++) {
            if (num == n * j) {
                answer.push_back(num);
            }
        }
    }

    return answer;
}



// 답안
vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;

    int bae = -1;       // 가장 말도 안 되는 값으로 초기화해야 함.
    int j = -1;

    for (int i = 0; i < numlist.size(); i++) {
        for (int n; n < 10000; n++) {
            if (numlist[i] > i * n) {
                j = numlist[i];
            }
        }
    }

    answer.push_back(bae);
    answer.push_back(j);

    return answer;
}