// �������� ����
// �������̶� �� ���� ���ڸ� ������ ���Ͽ� ¦���� ��Ÿ�� ������ (a, b)�� ǥ���մϴ�. 
// �ڿ��� n�� �Ű������� �־��� �� �� ������ ���� n�� �ڿ��� �������� ������ return�ϵ��� solution �Լ��� �ϼ����ּ���.

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            answer++;
        }
    }

    return answer;
}