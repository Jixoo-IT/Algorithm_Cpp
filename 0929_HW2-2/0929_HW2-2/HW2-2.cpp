// �ﰢ���� �ϼ����� (1)

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;

    int a = sides[0], b = sides[1], c = sides[2];
    int max, edge1, edge2;

    if (a > b && a > c) {   // a�� �ִ�
        max = a;
        edge1 = b;
        edge2 = c;
    }
    else if (b > a && b > c) { // b�� �ִ�
        max = b;
        edge1 = a;
        edge2 = c;
    }
    else if (c > a && c > b) { // c�� �ִ�
        max = c;
        edge1 = a;
        edge2 = b;
    }

    if (max < edge1 + edge2) {
        answer = 1;
    }
    else {
        answer = 2;
    }

    return answer;
}