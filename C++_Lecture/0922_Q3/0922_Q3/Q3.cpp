#include <string>

using namespace std;

int solution(int n) {
    int answer = 2;

    for (int i = 1; i <= n; i++) {
        if (i * i == n) {   // if (n / i == i)�� �ϸ�, �׽�Ʈ���̽� 8, 10���� ���� �߻�/ �̷� �������� �����⺸�� ���ϱ�� ��������.
            return 1;
        }
    }
    return answer;
}

// 	���� (signal: floating point exception (core dumped)) > i=0���� �ʱ�ȭ�ϰ�, ������ i�� �ؼ� ���� �߻�