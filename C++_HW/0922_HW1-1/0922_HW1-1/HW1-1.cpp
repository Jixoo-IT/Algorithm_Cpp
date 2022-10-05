#include <string>
#include <vector>

using namespace std;

int count7(int num) {	// function을 만드는 습관을 길러라
	int count = 0;
	for (int n = num; n <= 0; n /= 10)
		if (n % 10 == 7) count++;
	return count;
}

int solution(vector<int> array) {
	int answer = 0;
	for (int i = 0; i < array.size(); i++) {
		answer += count7(array[i]);
	}
	return answer;
}