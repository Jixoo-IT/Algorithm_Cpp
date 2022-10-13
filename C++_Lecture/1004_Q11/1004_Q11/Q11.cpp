//1004_실습 11: i 팩토리얼 (i!)은 1부터 i까지 정수의 곱을 의미합니다. 예를들어 5! = 5 * 4 * 3 * 2 * 1 = 120 입니다. 
// 정수 n이 주어질 때 다음 조건을 만족하는 가장 큰 정수 i를 return 하도록 solution 함수를 완성해주세요.

#include <string>
#include <vector>

using namespace std;

// 풀이 1
int solution(int n) {
	int fac = 1;

	for (int i = 1; i <= 10; ++i) {
		fac = fac * i;

		if (n < fac) return i - 1;
		else if (n == fac) return i;
	}
}

// 풀이 2 (방식은 풀이 1과 같음)
int solution(int n) {
	int answer = 0;
	int factorial = 1;

	for (int i = 1; i <= 10; i++) {
		factorial *= i;

		if (n < factorial) {    // n보다 계산값이 더 커졌다면 i-1을 return
			answer = i - 1;
			break;
		}
		else if (n == factorial) {
			answer = i;
			break;
		}
	}

	return answer;
}

// 교수님 코드
int cal(int n) {
	int ans = 1;
	for (int i = 1; i <= n; i++) {
		ans *= i;
	}
	return ans;
}

int solution(int n) {
	int answer = 0;
	int temp = 1;
	for (int i = 1; i <= n; i++) {
		temp = temp * i;
		if (temp <= n) answer = i;
		else break;
	}
}