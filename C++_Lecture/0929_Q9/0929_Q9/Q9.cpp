// Q9_����� ��

// Ǯ��
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int diff = 100000;

    sort(array.begin(), array.end());       // sort �Լ�: �迭�� ������������ ����
    for (const auto v : array) {         // ���� ��� for��: for(type element : element_array)
                                        // �ε��� 0���� ������ �ش��ϴ� ��Ұ� element_array���� element(�ӽð�ü)�� ����ȴ�
        if (diff > abs(v - n)) {       // abs �Լ�: ������ ��ȯ, array�� ���ҿ� n�� ���̰� ���� ���� diff�� ��.
            diff = abs(v - n);
            answer = v;
        }

    }
    return answer;
}

// ���
int getDiff(int n, int m) {
    if (n > m) return n - m;
    else return m - n;
}
int solution(vector<int> array, int n) {
    int answer = -200; //���� ���� �ɼ� ���� ������ �ʱ�ȭ
    for (int i = 0; i < array.size(); i++)
        if (getDiff(array[i], n) < getDiff(answer, n) || getDiff(array[i], n) == getDiff(answer, n) && answer > array[i])//���� ���� �ش�
            answer = array[i];
    return answer;
}