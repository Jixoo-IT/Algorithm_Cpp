// 3진법 뒤집기

#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

class P4 {
private:
	int num;
	int answer;
	vector<int> v;
public:
	P4() {		// 생성자에서 변수 초기화
		answer = 0; 
		num = 0; 
		vector<int> v = {};
	}
	int reverseNum(int n);
};

int P4::reverseNum(int n) {
	num = n;
	vector<int> v = {};
	answer = 0;

	while (num) {		// n을 3진법으로 바꾸기
		v.push_back(num % 3);
		num /= 3;
	}

	reverse(v.begin(), v.end());		// 3진법 뒤집기

	for (int i = 0; i < v.size(); i++) {		// 10진법으로 표현
		answer += pow(3, i) * v[i];				// pow '제곱 함수', pow(3, i) -> 3의 i제곱
	}

	return answer;
}

int main() {
	P4 p;
	cout << p.reverseNum(45) << endl;
	cout << p.reverseNum(125) << endl;
}