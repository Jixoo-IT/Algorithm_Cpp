#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c;
	string sum;
	cin >> a >> b >> c;

	cout << a + b - c << "\n";
	
	sum = to_string(a) + to_string(b);
	
	cout << stoi(sum) - c;

	return 0;
}