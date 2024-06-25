#include <iostream>
using namespace std;

int main() {
	int num, budget, hotel, week, personal, min = 0x7fffffff, sum = 0;
	cin >> num >> budget >> hotel >> week;
	
	for (int i = 0; i < hotel; i++) {
		cin >> personal;
		sum = 0;

		for (int j = 0; j < week; j++) {
			int tmp;
			cin >> tmp;

			if (tmp >= num) {
				sum = personal * num;
			}
		}
		if (min > sum && sum != 0) {
			min = sum;
		}
	}
	if (min > budget)
		cout << "stay home";
	else
		cout << min;

	return 0;
}