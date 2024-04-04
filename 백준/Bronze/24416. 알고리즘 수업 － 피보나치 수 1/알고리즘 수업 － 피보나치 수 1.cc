#include <iostream>
#include <vector>
using namespace std;

int cnt1 = 0, cnt2 = 0;

int fib(int n) {
	if (n == 1 || n == 2) {
		cnt1++;
		return 1;
	}
	else {
		return (fib(n - 1) + fib(n - 2));
	}
}

int fibonacci(int n) {
	int arr[41] = { 0 };

	arr[1] = arr[2] = 1;
	
	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		cnt2++;
	}

	return arr[n];
}

int main() {
	int n;
	cin >> n;

	fib(n);
	fibonacci(n);
	cout << cnt1 << " " << cnt2;

	return 0;

}