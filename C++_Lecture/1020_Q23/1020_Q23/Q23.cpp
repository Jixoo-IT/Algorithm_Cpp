// Q23. �Ӹ����
// �տ������� ���� ���� �ڿ������� ���� �� �Ȱ��� �ܾ �Ӹ����(palindrome)�̶�� �մϴ�. 
// �� �ڿ��� n, m�� �Ű������� �־��� ��,
// n �̻� m ������ �ڿ��� �� �Ӹ������ ������ ������ return �ϵ��� solution �Լ��� �ϼ��� �ּ���.

//Ǯ��
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, int m) {
    int answer = 0;
    string input;

    for (int i = n; i <= m; i++) {
        input = to_string(i);
        string first = input;
        reverse(input.begin(), input.end());
        if (first == input) {
            answer++;
        }
    }

    return answer;
}
