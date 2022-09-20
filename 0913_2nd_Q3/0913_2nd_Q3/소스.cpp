#include <iostream>
using namespace std;

int main() {
	int val1;
	int div;

	cout << "Please enter a integer: ";
	cin >> val1;		// val1을 입력받음.
	div = val1 % 2;

	if (div == 0) {
		cout << "The value" << val1 << "is an even number." << endl ;
	}
	else {
		cout << "The value" << val1 << "is an odd number." << endl;
	}

	return 0;
}

/*
	int val;
	string cat;

	cin >> val;

	if (val %2 == 0)
		cat = "even";
	else
		cat = "odd";

	cout << "The value" << val << " is an " << cat << "number." << end1;

	return 0;
*/