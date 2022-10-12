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

int main(string A, string B) {		// 0-n-1번 미는 것까지만 유효
	for (int answer = 0; A.length() == B.length() && answer < A.length(); answer++) {
		if (isSame(A, B, answer))		// function을 만들어 기능을 쪼개야 함
			return answer;
	}
	return -1;
}


// 추가 풀이- algorithm 라이브러리 사용 (rotate 함수)
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string A, string B) {
    int answer = -1;    // 문자열 밀기가 불가능한 경우에는 for문을 빠져나오기 때문에, answer = -1로 초기화를 해주어야 함.
    for (int i = 0; i < A.size(); ++i)
    {
        if (A == B)
        {
            answer = i;
            break;
        }
        rotate(A.begin(), A.end() - 1, A.end());       // rotate 함수
    }
    return answer;
}

// rotate(v.begin(), v.begin() + 1, v.end());  1칸씩 왼쪽으로 이동
// rotate(v.begin(), v.begin() + 2, v.end());  2칸씩 왼쪽으로 이동
// rotate(v.begin(), v.end() - 1 , v.end());   1칸씩 오른쪽으로 이동
// rotate(v.begin(), v.end() - 3, v.end());    3칸씩 오른쪽으로 이동