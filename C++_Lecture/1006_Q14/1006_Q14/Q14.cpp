/*�Ӿ��̰� ���� �ִ� ������ ���� balls�� ģ���鿡�� ������ �� ���� ���� share�� �Ű������� �־��� ��,
  balls���� ���� �� share���� ������ ���� ������ ��� ����� ���� return �ϴ� solution �Լ��� �ϼ����ּ���.
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

// �� Ǯ��

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