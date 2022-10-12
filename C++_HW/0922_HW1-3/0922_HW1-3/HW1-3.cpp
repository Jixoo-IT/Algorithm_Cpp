#include <string>
#include <vector>

using namespace std;

bool isSame(string A, string B, int shift) {
	for (int i = 0; i < A.length(); i++){
		if (A[i] != B[(i + shift) % B.length()])
			return false;
	}
	return true;
}

int main(string A, string B) {		// 0-n-1�� �̴� �ͱ����� ��ȿ
	for (int answer = 0; A.length() == B.length() && answer < A.length(); answer++) {
		if (isSame(A, B, answer))		// function�� ����� ����� �ɰ��� ��
			return answer;
	}
	return -1;
}


// �߰� Ǯ��- algorithm ���̺귯�� ��� (rotate �Լ�)
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string A, string B) {
    int answer = -1;    // ���ڿ� �бⰡ �Ұ����� ��쿡�� for���� ���������� ������, answer = -1�� �ʱ�ȭ�� ���־�� ��.
    for (int i = 0; i < A.size(); ++i)
    {
        if (A == B)
        {
            answer = i;
            break;
        }
        rotate(A.begin(), A.end() - 1, A.end());       // rotate �Լ�
    }
    return answer;
}

// rotate(v.begin(), v.begin() + 1, v.end());  1ĭ�� �������� �̵�
// rotate(v.begin(), v.begin() + 2, v.end());  2ĭ�� �������� �̵�
// rotate(v.begin(), v.end() - 1 , v.end());   1ĭ�� ���������� �̵�
// rotate(v.begin(), v.end() - 3, v.end());    3ĭ�� ���������� �̵�