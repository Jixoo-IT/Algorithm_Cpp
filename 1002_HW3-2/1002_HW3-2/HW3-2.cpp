// HW 3-2 �����ִ� ������ ����
// ���ڿ� my_string�� �Ű������� �־����ϴ�. 
// my_string�� �ҹ���, �빮��, �ڿ����θ� �����Ǿ��ֽ��ϴ�. 
// my_string���� �ڿ������� ���� return�ϵ��� solution �Լ��� �ϼ����ּ���.

#include <string>
#include <vector>

using namespace std;

int Sum(string a_string) {
    int i, num = 0, sum = 0;

    for (i = 0; a_string[i]; i++) {
        if (a_string[i] >= '0' && a_string[i] <= '9') {
            num = num * 10 + a_string[i] - '0';
        }
        else {
            if (num > 0) {
                sum = sum + num;
                num = 0;
            }
        }
    }
    if (num > 0) sum += num;

    return sum;
}


int solution(string my_string) {
    int answer = 0;

    answer = Sum(my_string);

    return answer;
}