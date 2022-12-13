
// Q10. ����� ��
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// 1��
class P10 {
private:
	int num;
	int answer;
public:
	int Plus(int n);
};

int P10::Plus(int n) {
	answer = 0;		// �ʱ�ȭ �ʼ�
	num = n;
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			answer += i;
		}
	}
	return answer;
}

//////////////////////////////////////////
// 2��

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