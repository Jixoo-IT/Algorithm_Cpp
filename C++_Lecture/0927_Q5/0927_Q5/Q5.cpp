// n�� ��� ����

// Ǯ�� 1_ ������ �̿�, �����ϸ� '������ == 0'���� �ؼ� Ǯ��
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

// Ǯ�� 2 _ ���ϱ� �̿�
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



// ���
vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;

    int bae = -1;       // ���� ���� �� �Ǵ� ������ �ʱ�ȭ�ؾ� ��.
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