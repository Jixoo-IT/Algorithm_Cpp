// ���ӵ� ���� ��

// �� Ǯ�� - ���������� �� ������ �̿��� Ǯ��
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;

    int check = 2 * total / num;
    int start = (check - num + 1) / 2;

    for (int i = start; i < start + num; i++) {   // �ٺ�: for (start; start < start+ num; start++)
        answer.push_back(i);
    }

    return answer;
}



// ���
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

    for (int i = -1000; i <= 1000; i++) {   // -total �̶�� �� ���, total�� 0�̶��, -2, -1, 0, 1, 2�� �����ε� 0~0�� ���ư��Ƿ� ���� �߻�. ���� total ��� 1000���� ������.
        if (sum(i, num) == total) {
            for (int j = 0; j < num; j++)
                answer.push_back(i + j);
            break;
        }
    }
    return answer;
}