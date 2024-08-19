#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N, M;
int maxBit, result;
long long cache[11];

int countBit(long long bit) {
	int result = 0;

	while (bit) {
		result += bit & 1;
		bit >>= 1;
	}

	return result;
}

void minGuitar(int idx, int cnt, long long bit) {
	int Y = countBit(bit);

	if (maxBit < Y) {
		maxBit = Y;
		result = cnt;
	} else if (maxBit == Y) {
		result = min(result, cnt);
	}

	if (idx == N) {
		return;
	}

	minGuitar(idx + 1, cnt + 1, bit | cache[idx]);
	minGuitar(idx + 1, cnt, bit);
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; i++)	{

		string name, playList;
		cin >> name >> playList;

		for (int j = 0; j < M; j++) {
			if (playList[j] == 'Y') {
				cache[i] |= (1LL << (M - 1 - j));
			}
		}
	}

	minGuitar(0, 0, 0);

	if (!maxBit) {
		cout << -1 << "\n";
	}
	else {
		cout << result << "\n";
	}

	return 0;
}