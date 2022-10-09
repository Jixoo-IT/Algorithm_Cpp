#include <string>
#include <vector>

using namespace std;

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