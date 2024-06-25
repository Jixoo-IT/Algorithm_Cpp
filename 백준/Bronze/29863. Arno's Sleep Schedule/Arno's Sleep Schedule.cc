#include <iostream>
using namespace std;

int main() {
	int sleep, awake;

	cin >> sleep >> awake;

	if (0 <= sleep && sleep <= 3) {
		cout << awake - sleep;
	}
	else {
		cout << (24 - sleep) + awake;
	}
}