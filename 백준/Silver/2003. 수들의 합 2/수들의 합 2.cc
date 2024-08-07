#include <iostream>
#include <vector>
using namespace std;

// 투 포인터
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	int n, m, cnt = 0, arr[10001];
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int left = 0, right = 0;
	int result = arr[0];

	while (right < n) {
		if (result == m) {			// result == m 이면,
			cnt++;			// cnt 값 증가
			result += arr[++right];		// left 혹은 right를 오른쪽으로 한 칸 옮기기 (이 코드에서는 right 이동)
		} 
		else if (result < m) {		// result 값이 구해야하는 m 값보다 작으면.
			result += arr[++right];		// right를 오른쪽으로 한 칸 옮기기
		}
		else if (result > m) {		// result 값이 구해야하는 m 값보다 크면,
			result -= arr[left++];		// left를 오른쪽으로 한 칸 옮기기
		}
	}
	
	cout << cnt << "\n";

	return 0;
}