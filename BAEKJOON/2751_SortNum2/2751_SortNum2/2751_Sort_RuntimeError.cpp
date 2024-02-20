#include <iostream>
#include <string>
using namespace std;

/*  O(n^2), 시간초과 오류
int main() {
	int N, num, temp;		
	long arr[10000];

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}

	for (int i = 0; i <= N - 2 ; i++) {
		for (int j = i + 1; j <= N - 1; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}
*/