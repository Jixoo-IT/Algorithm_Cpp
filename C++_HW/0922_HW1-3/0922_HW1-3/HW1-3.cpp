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


// �߰� Ǯ��
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string A, string B) {
    int answer = -1;
    for (int i = 0; i < A.size(); ++i)
    {
        if (A == B)
        {
            answer = i;
            break;
        }
        rotate(A.begin(), A.end() - 1, A.end());
    }
    return answer;
}