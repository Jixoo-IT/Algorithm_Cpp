#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str = "";
	int M, x;
	int arr[21] = { 0, };	// 배열을 0으로 초기화 (x가 배열에 없음을 의미)

	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> str;

		if (str=="add"){
			cin >> x;
			if (arr[x] == 0) {	// x가 배열에 없는 경우 add
				arr[x] = 1;		// arr[x]를 1로
			}
		}
		else if (str == "remove") {
			cin >> x;
			if (arr[x] == 1) {	// x가 배열에 있는 경우 remove
				arr[x] = 0;		// arr[x]를 0로
			}
		}
		else if (str == "check") {
			cin >> x;
			if (arr[x] == 0) {
				cout << "0\n";
			}
			else {
				cout << "1\n";
			}
		}
		else if (str == "toggle") {
			cin >> x;
			if (arr[x] == 1) {
				arr[x] = 0;
			}
			else if (arr[x] == 0) {
				arr[x] = 1;
			}
		}
		else if (str == "all") {
			for (int k = 1; k <= 20; k++) {
				arr[k] = 1;
			}
		}
		else if (str == "empty") {
			fill_n(arr, 21, 0);  //memset(arr, 0, sizeof(arr));
		}
	}

	return 0;
}