#include <iostream>
using namespace std;

bool visit[101];

int main() {
	int n, num, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;

		if (visit[num] == true) {	
			cnt++;
		}
		else {
			visit[num] = true;
		}
	}
	cout << cnt;

	return 0;
}