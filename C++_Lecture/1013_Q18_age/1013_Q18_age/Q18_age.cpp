// Q18_�ܰ��༺�� ����
// a�� 0, b�� 1, c�� 2, ..., j�� 9�Դϴ�. ���� ��� 23���� cd, 51���� fb�� ǥ���մϴ�. 
// ���� age�� �Ű������� �־��� �� PROGRAMMER-962�� ���̸� return

// Ǯ��
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int age) {
    string answer = "";

    for (int i = age; i > 0; i /= 10) {     // ���� �ڸ� ������ ���ڿ��� ��ȯ, reverse �Լ��� �̿��� ���ڿ��� ��������� ��.
        int num = age % 10;

        if (num == 0) {
            answer += 'a';
        }
        else if (num == 1) {
            answer += 'b';
        }
        else if (num == 2) {
            answer += 'c';
        }
        else if (num == 3) {
            answer += 'd';
        }
        else if (num == 4) {
            answer += 'e';
        }
        else if (num == 5) {
            answer += 'f';
        }
        else if (num == 6) {
            answer += 'g';
        }
        else if (num == 7) {
            answer += 'h';
        }
        else if (num == 8) {
            answer += 'i';
        }
        else if (num == 9) {
            answer += 'j';
        }
        age /= 10;
    }

    reverse(answer.begin(), answer.end());      // ���ڿ��� ������ 'reverse'�Լ� ���, ó���� rotate ����ؼ� ������ > ���ڿ� �б�� ���� �ٸ��� �����.

    return answer;
}


// ���
string solution(int age) {
    string answer = "";
    for (int i = age; i > 0; i /= 10) {
        answer = (char)('a' + i % 10) + answer;
    }
    return answer;
}