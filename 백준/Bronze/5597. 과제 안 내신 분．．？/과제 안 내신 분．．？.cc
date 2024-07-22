#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[31] = { 0, };	// array를 모두 0으로 초기화
	//fill_n(arr, 31, -1)	// 만약, 0이 아닌 다른 숫자로 모두 초기화하고 싶다면, fill_n 함수를 사용하자
	int num, answer;

	for (int i = 0; i < 28; i++) {
		cin >> num;
		arr[num] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (arr[i] == 0) {
			cout << i << "\n";
		}
	}

	return 0;
}