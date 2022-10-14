// HW 3-2 �����ִ� ������ ����
// ���ڿ� my_string�� �Ű������� �־����ϴ�. 
// my_string�� �ҹ���, �빮��, �ڿ����θ� �����Ǿ��ֽ��ϴ�. 
// my_string���� �ڿ������� ���� return�ϵ��� solution �Լ��� �ϼ����ּ���.

// Ǯ��
#include <string>
#include <vector>

using namespace std;

int Sum(string a_string) {
    int i, num = 0, sum = 0;

    for (i = 0; a_string[i]; i++) { // a_string[i] ���� ���ٸ� ����
        if (a_string[i] >= '0' && a_string[i] <= '9') { // ������ ��,
            num = num * 10 + a_string[i] - '0';     // -'0': �ƽ�Ű �� 0�� ��ȯ�Ͽ� -48�� �ȴ�. / �� �ڸ� �� ������ ��츦 ����ϱ� ����, num * 10
        }                                           // ����, a_string[0]�� 1�̶��, num * 10 + 49 - 48 (1�� �ƽ�Ű�ڵ� �� 49)
        else {                      // ���ĺ��� ��,
            if (num > 0) {          // num�� 0 �̻��� ���(������ ���ڰ� �־��� ���)
                sum = sum + num;    // sum�� num�� ���� ��,
                num = 0;            // num = 0���� �� �ʱ�ȭ
            }
        }
    }
    if (num > 0) sum += num;        // �迭�� �������� ������ ���, num�� �������� �ʰ� for���� ���������Ƿ�, num�� �߰��� ����.

    return sum;
}

int solution(string my_string) {
    int answer = 0;

    answer = Sum(my_string);

    return answer;
}


// ���
int changeToDec(vector<int> temp) {
    int k = 1;
    int num = 0;
    for (int i = temp.size() - 1; i >= 0; i--, k *= 10)
        num += temp[i] * k;
    return num;
}



int getNumbers(string my_string) {
    vector<int> numbers;
    vector<int> temp;
    for (int i = 0; i < my_string.length(); i++) {

        if (my_string[i] < '0' || my_string[i] > '9') {
            if (temp.size() > 0) {
                numbers.push_back(changeToDec(temp));
                temp.clear();
            }
        }
        else {
            temp.push_back(my_string[i] - '0');
        }

        numbers.push_back(changeToDec(temp));
    } return numbers;
}


int solution(string my_string) {
    int answer = 0;

    vector<int> numbers = getNumbers(my_string);
    for (int i = 0; i < numbers.size(); i++) {
        answer += numbers[i];
    }

    return answer;
}