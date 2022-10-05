#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
	int i, j;
	cin >> i >> j;
	try {
		int ans = div(i, j);
		cout << ans;
	}
	catch (myerror e) {
		cout << "myerror";
	}
	return 0;
}