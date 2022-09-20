
#include <iostream>
using namespace std;

int main() {
	int val1, val2, val3;	
	int largest, mid, smallest;

	cout << "Please enter three integers: ";
	cin >> val1 >> val2 >> val3;		// val1, val2, val3을 차례대로 입력받음.

	if (val1 > val2) {
		largest = val1;

		if (val2 > val3) {
			mid = val2;
			smallest = val3;
		}
		else {
			mid = val3;
			smallest = val2;
		}
	}
	else {
		largest = val2;

		if (val1 > val3) {
			mid = val1;
			smallest = val3;
		}
		else {
			mid = val3;
			smallest = val1;
		}
	}

	cout << smallest << ", " << mid << ", " << largest << endl;

	return 0;
}

/*
	int val1, val2, val3;
	int largest, mid, smallest;

	cin >> val1 >> val2 >> val3;

	if (val1 > val2 && val1 > val3) {
		largest = val1;
		if (val2 > val3){
			mid = val2;
			smallest = val3;
		} else {
			mid = val3;
			smallest = val2;
		}
	} else if (val2 > val1 && val2 > val3){
		largest = val2;
		if (val1 > val3){
			mid = val1;
			smallest = val3;
		} else {
			mid = val3;
			smallest = val1;
		}
	} else {
		middle = val3;
		smallest = val1;
	}


	cout << smallest << mid << largest << endl;

	return 0;
*/