// Q22. �м� ���ϱ�

// Ǯ��
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer;

    int topNum = num1 * denum2 + num2 * denum1;    // ����
    int botNum = num1 * num2;                    // �и�
    int maximum = 1;                           // �ִ�����

    for (int i = 1; i <= topNum; i++) {      // ���
        if (topNum % i == 0 && botNum % i == 0) {
            maximum = i;
        }
    }

    answer.push_back(topNum / maximum);
    answer.push_back(botNum / maximum);

    return answer;
}

// ���
#include <string>
#include <vector>

using namespace std;

void getSum(int& denum, int& num, int denum1, int num1, int denum2, int num2) {
    num = num1 * num2;
    denum = denum1 * num2 + denum2 * num1;
}

void postDiv(int& denum, int& num) {
    for (int i = 2; denum > 1 && num > 1 && denum >= i && num >= i; )
        if (denum % i == 0 && num % i == 0) {
            denum = denum / i;
            num = num / i;
        }
        else i++;
}

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer;
    int denum, num;
    getSum(denum, num, denum1, num1, denum2, num2);
    postDiv(denum, num);
    answer.push_back(denum);
    answer.push_back(num);
    return answer;
}