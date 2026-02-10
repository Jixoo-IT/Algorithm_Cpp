#include <iostream>
using namespace std;

int main() {
	while (1) {
		int x, y, z;
		int temp;

		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0) {
			return 0;
		}

		if (x > y) {
			temp = y;
			y = x;
			x = temp;
		} if (y > z) {
			temp = z;
			z = y;
			y = temp;
		}


		if (x * x + y * y == z * z) {
			cout << "right" << "\n";
		}
		else {
			cout << "wrong" << "\n";
		}
	}

	return 0;
}