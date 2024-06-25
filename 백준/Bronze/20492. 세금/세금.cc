#include <iostream>
using namespace std;

int main() {
	int n;
	int a, b;

	cin >> n;
	
	a = n * (1 - 0.22);

	b = n * 0.8 + (n * 0.2 * (1 - 0.22));

	cout << a << " " << b;
}