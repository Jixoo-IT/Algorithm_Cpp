#include <iostream>
using namespace std;

int arr[10];

int main() {
	int A = 0, B = 0, C = 0, mul;

	cin >> A >> B >> C;
	mul = A * B * C;

	for (int i = mul; i > 0; i/=10) {
		arr[i % 10]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] <<endl;
	}

	return 0;
}
