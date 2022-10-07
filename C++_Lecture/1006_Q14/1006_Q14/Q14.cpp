/*머쓱이가 갖고 있는 구슬의 개수 balls와 친구들에게 나누어 줄 구슬 개수 share이 매개변수로 주어질 때,
  balls개의 구슬 중 share개의 구슬을 고르는 가능한 모든 경우의 수를 return 하는 solution 함수를 완성해주세요.
*/

int product(int from, int count) {
	int answer = 1;
	for (int i = 0; i < count; i++) {
		answer = answer * (from - i);
	}
	return answer;
}

int solution(int balls, int share) {
	int answer = product(balls, share) / product(share, share);
	return answer;
}

// 내 풀이

int factorial(int num) {
    int resultf = -1;

    for (int i = 0; i <= num; ++i) {
        resultf = resultf * i;
    }
    return resultf;
}

int func(int a, int b) {
    int result = -1;

    int up = factorial(a);
    int down = factorial(a - b) * factorial(b);

    result = up / down;

    return result;
}


int solution(int balls, int share) {
    int answer = 0;

    func(balls, share);

    return answer;
}