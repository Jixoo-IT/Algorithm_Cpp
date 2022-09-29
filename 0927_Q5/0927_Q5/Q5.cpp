#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;

    int bae = -1;       // 가장 말도 안 되는 값으로 초기화해야 함.
    int j = -1;

    for (int i = 0; i < array.size(); i++) {
        for (int n; n < 10000; n++) {
            if (array[i] > i * n) {
                j = array[i];
            }
        }
    }

    answer.push_back(bae);
    answer.push_back(j);






    return answer;
}




vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;

    for (int i = 0; i < numlist.size(); i++) {
        if (numlist[i] % n == 0) {
            answer.push_back(numlist[i]);
        }
    }

    return answer;
}