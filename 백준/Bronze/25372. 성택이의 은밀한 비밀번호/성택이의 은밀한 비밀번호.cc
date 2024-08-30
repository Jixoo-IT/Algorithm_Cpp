#include <iostream>
using namespace std;

int main() {
	int n;
	string s;

	cin >> n;

	while (n--) {
		cin >> s;
		int size = s.size();

		if (size >= 6 && size <= 9) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}
	}
	return 0;
}