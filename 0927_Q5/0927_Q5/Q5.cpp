#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;

    int bae = -1;       // ���� ���� �� �Ǵ� ������ �ʱ�ȭ�ؾ� ��.
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