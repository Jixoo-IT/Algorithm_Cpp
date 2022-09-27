=

/* 가장 큰 수 구하기*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;

    int big = -1;       // 가장 말도 안 되는 값으로 초기화해야 함.
    int big_index = -1;

    for (int i = 0; i < array.size(); i++) {
        if (array[i] > big) {
            big = array[i];
            big_index = i;
        }
    }

    answer.push_back(big);
    answer.push_back(big_index);


    return answer;
}