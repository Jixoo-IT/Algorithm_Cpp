=

/* ���� ū �� ���ϱ�*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;

    int big = -1;       // ���� ���� �� �Ǵ� ������ �ʱ�ȭ�ؾ� ��.
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