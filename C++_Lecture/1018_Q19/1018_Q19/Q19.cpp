// Q.19 ������
// �� angle�� �Ű������� �־��� �� 
// ������ �� 1, ������ �� 2, �а��� �� 3, ���� �� 4�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;

    if (angle == 180) {
        answer = 4;
    }
    else if (angle > 90) {
        answer = 3;
    }
    else if (angle == 90) {
        answer = 2;
    }
    else if (angle > 0) {
        answer = 1;
    }

    return answer;
}