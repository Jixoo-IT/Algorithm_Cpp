
// Q10. 약수의 합
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// 1차
class P10 {
private:
	int num;
	int answer;
public:
	int Plus(int n);
};

int P10::Plus(int n) {
	answer = 0;		// 초기화 필수
	num = n;
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			answer += i;
		}
	}
	return answer;
}

//////////////////////////////////////////
// 2차

class S10 {
	int num;
	int answer;
public:
	S10() { num = 0; answer = 0; };
	int solution(int n);
};

int S10::solution(int n) {
	num = n;
	answer = 0;

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			answer += i;
		}
	}
	return answer;
}

int main() {
	S10 s;

	cout << s.solution(12) << endl;
	cout << s.solution(5) << endl;

	return 0;
}