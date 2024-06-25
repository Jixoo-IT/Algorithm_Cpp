#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, answer, min, sec;
	cin >> a >> b >> c >> d;

	answer = a + b + c + d;

	min = answer / 60;
	sec = answer % 60;

	cout << min << "\n" << sec;

	return 0;
}