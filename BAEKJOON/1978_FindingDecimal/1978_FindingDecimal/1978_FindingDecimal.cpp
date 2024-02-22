#include <iostream>
using namespace std;

int main() {
	int N, num, decimal=0, count=0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;

		if (num == 2) {
			decimal++;
		}
		else {
			if (num == 1) {
				count++;
			}
			for (int j = 2; j < num; j++) {
				if (num % j == 0) {
					count++;
					cout << num << endl;
				}
			}
			if (count == 0) {
				decimal++;
			}
			count = 0;
		}
	}

	cout << decimal;

	return 0;
}



/*
int main() {
	int N, num, decimal;

	cin >> N;
	decimal = N;

	for (int i = 0; i < N; i++) {
		cin >> num;

		if (num == 2) {
			decimal--;
		}
		else {
			for (int j = 2; j < num; j++) {
				if (num % j != 0 || num == 1) {
					decimal--;
					break;
				}
				break;
			}
		}
	}
	cout << decimal;

	return 0;
}
*/



/*
int main() {
	int N, num, decimal = 0;

	cin >> N;


	int N, num, decimal = 0;

	cin >>num;

	for (int j = 2; j < num; j++) {
		if (num % j == 0) {
			break;
		}
		decimal++;
		break;
	}


	cout << decimal;


	for (int i = 0; i < N; i++) {
		cin >> num;
		
		if (num > 1) {
			cout << num;
			for (int j = 2; j < num; j++) {
				if (num % j == 0) {
					decimal++;
					cout << num << j << decimal;
				}
			}
		}
	}

	cout << decimal;

	return 0;
}



int main() {
	int N, num, arr[1001], decimal = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				decimal++;
				cout << arr[i] << j << decimal;
			}
		}
	}

	cout << decimal;

	return 0;
}
*/